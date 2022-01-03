/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:56:26 by ndormoy           #+#    #+#             */
/*   Updated: 2021/06/30 17:53:39 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int a)
{
	int	new_nb;
	int	new_nb2;

	new_nb = 0;
	new_nb2 = 0;
	new_nb = a / 10 + 48;
	write (1, &new_nb, 1);
	new_nb2 = a % 10 + 48;
	write (1, &new_nb2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_number(i);
			write (1, " ", 1);
			print_number(j);
			if (!(i == 98 && j == 99))
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
