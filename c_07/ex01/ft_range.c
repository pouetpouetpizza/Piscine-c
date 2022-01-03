/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:20:53 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/07 20:39:47 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (!(tab))
		return (0);
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
