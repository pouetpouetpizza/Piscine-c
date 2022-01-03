/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:32:22 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 11:09:32 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(int val1, int val2, char *op)
{
	if (ft_strcmp(op, "-") == 0)
		ft_minus(val1, val2);
	else if (ft_strcmp(op, "+") == 0)
		ft_plus(val1, val2);
	else if (ft_strcmp(op, "%") == 0)
		ft_mod(val1, val2);
	else if (ft_strcmp(op, "/") == 0)
		ft_div(val1, val2);
	else if (ft_strcmp(op, "*") == 0)
		ft_plus(val1, val2);
}

int	main(int argc, char **argv)
{
	char	*op;
	int		val1;
	int		val2;

	if (argc < 4)
		return (0);
	op = argv[2];
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (!check_args(argc, op, val2))
		return (0);
	ft_do_op(val1, val2, op);
	write (1, "\n", 1);
	return (0);
}
