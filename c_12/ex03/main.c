/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:37:17 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 11:28:47 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

int main()
{
	t_list *begin, *elem1, *elem2, *elem3;

	elem1 = ft_create_elem("lol");
	elem2 = ft_create_elem("pouet");
	elem3 = ft_create_elem("oui");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	begin = elem1;
	printf("%s\n", ft_list_last(begin)->data);	
}
