/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:51:37 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/04 21:00:43 by ndormoy          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	len = ft_strlen(to_find);
	if (!(len))
		return (str);
	while (*str)
	{
		i = 0;
		if (*str == to_find[i])
		{
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (i == len)
				return (str);
		}
		str++;
	}
	return (0);
}
