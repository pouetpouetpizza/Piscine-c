/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stock.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:36:44 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 21:59:35 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_read1(char **argv)
{
	int	fd;
	char buf[BUF_SIZE + 1];
}

int	ft_manage_read(int argc, char **argv)
{
	//Quand on a tail -c 25 test.c
	if (ft_strcmp("-c", argv[1]) == 0 && argc == 4)
	{
		ft_read1(argv);
	}
	//Quand on a tail -c 25 test.c testo.c .....
	else if (ft_strcmp("-c", argv[1] == 0 && argc > 4))
	{

	}
	else if ( )
	{

	}
}
