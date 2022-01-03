/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:45:21 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 15:15:58 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_puterror(char *str)
{
	while (*str)
	{
		write (2, str, 1);
		str++;
	}
}

void	ft_read_stdin(void)
{
	int		ret;
	char	buf[BUF_SIZE];

	ret = 0;
	while ((ret = read (0, buf, BUF_SIZE)))
		write (1, buf, ret);
	/*
	offset = 0;
	while (read(file, &buf[offset], 1))
	{
		if (offset == BUF_SIZE)
			return (0);
		if (buf[offset] = '\n')
			
		offset++;
	}
	 while (1)
	  {
	  		ret = read(0, buf, BUF_SIZE);
	 	if (!ret)
	 	break ;
	 }
	 */
}

void	show_error(char *f_name, char *prg_name)
{
	ft_puterror (basename(prg_name));
	ft_puterror (": ");
	ft_puterror (f_name);
	ft_puterror (": ");
	ft_puterror (strerror(errno));
	ft_puterror ("\n");
}

void	ft_display_file(char *f_name, char *prg_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	errno = 0;
	if ((fd = open(f_name, O_RDONLY)) < 0)
	{
		show_error(f_name, prg_name);
		return ;
	}
	while ((ret = read (fd, buf, BUF_SIZE)))
	{
		if (ret < 0)
		{
			show_error(f_name, prg_name);
			close (fd);
			return ;
		}
		write (1, buf, ret);
	}	
	close (fd);
}

int	main(int argc, char **argv)
{
	int				i;
	unsigned int	k;

	k = 0;
	i = 1;
	if (argc == 1)
		ft_read_stdin();
	while (i < argc)
	{
		if (argv[i][0] == '-')
			ft_read_stdin();
		else
			ft_display_file(argv[i], argv[0]);
		i++;
	}
	return (0);
}
