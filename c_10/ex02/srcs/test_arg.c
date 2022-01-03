/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:32:06 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 21:59:33 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	check_arg(int argc, char **argv)
{
	/*if (argv[1][0] != '-' && argv[1][1] != 'c' && argc == 2)*/
	if (ft_strcmp("-c", argv[1]) == 0 && argc == 2)
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": option requires an argument -- c\n");
		return (0);
	}/*
	else if (ft_strcmp("-c", argv[1]) == 0 && argc > 2)
	{
		ft_puterror(basename(argv[0]));
		ft_puterror(": illegal offset -- ");
		ft_puterror(argv[2]);
		ft_puterror("\n");
		return (0);
	}*/
	return (1);
}
