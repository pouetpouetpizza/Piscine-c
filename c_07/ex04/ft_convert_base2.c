/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:06:32 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/13 09:58:45 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base, int len);
int		ft_strlen(char *str);
void	ft_putchar(char c);
int		ft_atoi_base(char *str, char *base);

char	*ft_strdup(char *src)
{
	unsigned int		i;
	char				*dest;

	i = 0;
	dest = malloc (sizeof(char) * ft_strlen(src) + 1);
	if (!(dest))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_base(int nbr, char *base, char *ret)
{
	int				i;
	unsigned int	new_nbr;
	unsigned int	len;

	new_nbr = nbr;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		new_nbr = -nbr;
		ret[0] = '-';
	}
	if (new_nbr > len - 1)
	{
		ft_putnbr_base(new_nbr / len, base, ret);
		new_nbr %= len;
	}
	i = 0;
	while (ret[i])
		i++;
	ret[i] = base[new_nbr % len];
	ret[i + 1] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	ret[256];
	int		ret_atoi_base;

	if (!(check_base(base_from, ft_strlen(base_from))))
		return (NULL);
	if (!(check_base(base_to, ft_strlen(base_to))))
		return (NULL);
	ret_atoi_base = ft_atoi_base(nbr, base_from);
	if (ret_atoi_base < 0)
		ret[1] = '\0';
	else
		ret[0] = '\0';
	ft_putnbr_base(ret_atoi_base, base_to, ret);
	return (ft_strdup(ret));
}
