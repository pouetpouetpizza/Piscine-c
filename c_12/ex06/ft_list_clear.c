/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:00:41 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 14:23:34 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *previous;

	if (begin_list == NULL)
		return ;

	while (begin_list)
	{
		previous = begin_list;
		begin_list = begin_list->next;
		free_fct(previous->data);
		free(previous);
	}
}
