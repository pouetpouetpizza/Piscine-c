/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:45:02 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/07 10:05:27 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_check_base(char *base, unsigned int len_base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (len_base <= 1 || base[0] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < len_base - 1)
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	new_nbr;
	unsigned int	len_base;

	len_base = ft_strlen(base);
	if (ft_check_base(base, len_base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar ('-');
		new_nbr = -nbr;
	}
	else
		new_nbr = nbr;
	if (new_nbr > len_base - 1)
	{
		ft_putnbr_base(new_nbr / len_base, base);
		new_nbr = new_nbr % len_base;
	}
	ft_putchar(base[new_nbr % len_base]);
}
