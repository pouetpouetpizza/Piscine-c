/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:38:47 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 13:59:42 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
		*begin_list = ft_create_elem(data);

}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	int	i;

	if (size <= 0 || strs == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;	
	}
	return (begin_list);
}
