/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:00:56 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 21:39:14 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# define BUF_SIZE 50000
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>

void	ft_puterror(char *str);
int	ft_strcmp(char *s1, char *s2);
int	check_arg(int argc, char **argv);
int	ft_atoi(char *str);

#endif
