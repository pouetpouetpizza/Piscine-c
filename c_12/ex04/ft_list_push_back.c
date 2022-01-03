/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:30:41 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 12:38:12 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *current;

	current = *begin_list;
	if (current)
	{
		elem = ft_create_elem(data);
		while (current->next)
			current = current->next;
		current->next = elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
