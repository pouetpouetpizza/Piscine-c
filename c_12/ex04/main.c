/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:31:08 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 12:38:08 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

void	ft_print_list(t_list **begin_list)
{
	t_list *current;

	current = *begin_list;

	while (current)
	{
		printf("%s --> ", current->data);
		current = current->next;
	}
	printf("NULL");
}

int main()
{
	t_list *begin, *elem1, *elem2, *elem3;

	elem1 = ft_create_elem("lol");
	elem2 = ft_create_elem("pouet");
	elem3 = ft_create_elem("oui");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3 = NULL;

	begin = elem1;

	ft_list_push_back(&begin, "mdr");

	ft_print_list(&begin);
}
