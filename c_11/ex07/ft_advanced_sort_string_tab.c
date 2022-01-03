/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:55:57 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 17:30:47 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapstr(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			ft_swapstr(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
