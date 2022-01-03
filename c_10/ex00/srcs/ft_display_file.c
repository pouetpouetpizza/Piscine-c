/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:59:36 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 19:12:54 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstrn(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_puterror(char *str)
{
	while (*str)
	{
		write (2, str, 1);
		str++;
	}
}

int	ft_display_file(char **argv)
{
	int		ret;
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	ret = read (fd, buf, BUF_SIZE);
	if (ret < 0)
	{
		close(fd);
		return (0);
	}
	buf[ret] = '\0';
	ft_putstrn(buf, ret);
	close (fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_puterror("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (0);
	}
	else if (ft_display_file(argv) == 0)
		ft_puterror("Cannot read file.\n");
	return (0);
}
