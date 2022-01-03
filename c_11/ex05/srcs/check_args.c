/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:12:47 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 10:43:50 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	check_args(int argc, char *op, int val2)
{
	if (argc != 4)
		return (0);
	else
	{
		if ((ft_strcmp(op, "+") != 0 && ft_strcmp(op, "-") != 0
				&& ft_strcmp(op, "*") != 0
				&& ft_strcmp (op, "/") != 0 && ft_strcmp(op, "%")) != 0)
		{
			ft_putstr("0\n");
			return (0);
		}
		else if (ft_strcmp (op, "/") == 0 && val2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (ft_strcmp (op, "%") == 0 && val2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	}
	return (1);
}
