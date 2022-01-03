/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:54:10 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/12 17:32:56 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	i = 0;
	len_base = ft_strlen(base);
	if (len_base <= 1)
		return (0);
	while (i < len_base)
	{
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j] || base [i] == '-' || base [i] == '+')
				return (0);
			if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_base(char *base, char c, int *index)
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
	unsigned int	atoi;
	int				neg;
	int				size_base;
	int				index;

	neg = 1;
	atoi = 0;
	size_base = ft_strlen(base);
	if (check_base(base) == 0)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}	
	while (is_base(base, *str, &index) != -1 && *str)
	{
		atoi = atoi * size_base + index;
		str++;
	}
	return (atoi * neg);
}
