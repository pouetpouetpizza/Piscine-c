/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:01:28 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 14:23:37 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void	ft_print_list(t_list **begin_list)
{
	while (*begin_list)
	{
		printf("%s -> ", (*begin_list)->data);
		*begin_list = (*begin_list)->next;
	}
}

void	free_fct(void *pouet)
{
	(void)pouet;
	printf("La data a bien ete free\n");
}

int main()
{
	t_list *begin_list, *elem1, *elem2, *elem3;

	elem1 = ft_create_elem("lol");
	elem2 = ft_create_elem("pouet");
	elem3 = ft_create_elem("salut");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	begin_list = elem1;

	printf("AVANT :");
	ft_print_list(&begin_list);
	ft_list_clear(begin_list, &free_fct);
	printf("APRES :");
	ft_print_list(&begin_list);
}
