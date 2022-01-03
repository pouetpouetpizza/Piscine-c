/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:44:59 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 10:33:39 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int main()
{
	t_list *elem1, *elem2, *elem3, *begin;

	elem1 = ft_create_elem("lol");
	elem2 = ft_create_elem("pouet");
	elem3 = ft_create_elem("poulet");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	begin = elem1;

	int size_list;
    printf("size = %d\n", size_list = ft_list_size(begin));
}
