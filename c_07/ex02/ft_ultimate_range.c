/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:40:43 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/11 20:13:42 by ndormoy          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min;
	*range = (ft_range(min, max));
	if (!(*range))
		return (0);
	return (len);
}
