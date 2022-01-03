/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:04:34 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 11:11:38 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *c);
int		ft_strcmp(char *s1, char *s2);
int		check_args(int argc, char *op, int val2);
void	ft_minus(int val1, int val2);
void	ft_plus(int val1, int val2);
void	ft_mod(int va1, int val2);
void	ft_div(int va1, int val2);
void	ft_mult(int va1, int val2);

#endif
