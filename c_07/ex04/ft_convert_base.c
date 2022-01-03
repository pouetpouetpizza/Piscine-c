/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:06:12 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/13 12:29:35 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (len <= 1)
		return (0);
	while (i < len)
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || (base[i] >= 9 && base[i] <= 13))
				return (0);
			if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
				return (0);
			if (base[j] >= 9 && base[j] <= 13)
				return (0);
			if (base[j] == '+' || base[j] == '-' || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_base(char c, char *base, unsigned int *index)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			*index = i;
			return (1);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	len;
	int				neg;
	unsigned int	index;
	unsigned int	atoi;

	neg = 1;
	atoi = 0;
	len = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (is_base(*str, base, &index) != -1 && *str)
	{
		atoi = atoi * len + index;
		str++;
	}
	return (atoi * neg);
}
