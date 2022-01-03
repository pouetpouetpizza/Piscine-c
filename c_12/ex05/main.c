/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 12:39:37 by ndormoy           #+#    #+#             */
/*   Updated: 2021/07/20 13:59:40 by ndormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

int main()
{
	t_list	*first_elem;
	char *strs[4] = {"hey", "salut", "lol"};

	first_elem = ft_list_push_strs(3, strs);

	printf("1st = %s\n", first_elem->data);


}
