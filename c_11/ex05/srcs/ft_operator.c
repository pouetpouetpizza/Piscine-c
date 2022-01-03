/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:18:53 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 11:12:11 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_minus(int val1, int val2)
{
	int	nbr;

	nbr = val1 - val2;
	ft_putnbr(nbr);
}

void	ft_plus(int val1, int val2)
{
	int	nbr;

	nbr = val1 + val2;
	ft_putnbr(nbr);
}

void	ft_mod(int val1, int val2)
{
	int	nbr;

	nbr = val1 % val2;
	ft_putnbr(nbr);
}

void	ft_div(int val1, int val2)
{
	int	nbr;

	nbr = val1 / val2;
	ft_putnbr(nbr);
}

void	ft_mult(int val1, int val2)
{
	int	nbr;

	nbr = val1 * val2;
	ft_putnbr(nbr);
}
