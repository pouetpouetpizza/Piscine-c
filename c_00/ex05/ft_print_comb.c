/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:38:05 by ndormoy           #+#    #+#             */
/*   Updated: 2021/06/30 17:51:06 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int a)
{
	a += 48;
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_number(i);
				ft_print_number(j);
				ft_print_number(k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
