/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:12:22 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/19 22:44:53 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

void ft_print_list(t_list **begin_list)
{
    t_list *current;
    
    current = *begin_list;
    
    while(current)
    {
        printf("%s\n", current->data);
        current = current->next;
    }
}

int main()
{
    t_list    *elem1, *elem2, *elem3, *begin;
    
    elem1 = ft_create_elem("toto");
    elem2 = ft_create_elem("tata");
    elem3 = ft_create_elem("tutu");
    
    
    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = NULL;
    
    begin = elem1;
    
    ft_list_push_front(&begin, "yoooooo");
    /*
    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;
    
    elem1.data = "toto";
    elem2.data = "tata";
    elem3.data = "tutu";*/
   
    ft_print_list(&begin);
}
