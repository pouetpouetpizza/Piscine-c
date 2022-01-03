/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:28:20 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/04 12:19:11 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar (hexa[c / 16]);
	ft_putchar (hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str == 127 || *str < 32)
		{
			write (1, "\\", 1);
			ft_print_hex (*str);
		}
		else
			(ft_putchar(*str));
		str++;
	}
}
