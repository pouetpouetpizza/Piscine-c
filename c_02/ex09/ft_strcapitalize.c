/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:07:20 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/04 16:23:26 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	nb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (nb(str[i]) == 1 || min(str[i]) == 1 || maj(str[i] == 1))
		{
			if (min(str[i]) == 1 && cap == 1)
				str[i] -= 32;
			else if (maj(str[i]) == 1 && cap == 0)
				str[i] += 32;
			cap = 0;
		}
		else
			cap = 1;
		i++;
	}
	return (str);
}
