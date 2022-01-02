/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 13:21:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static node *get_sec_last_a(node **head_ref)
{
	   node *tmp=(*head_ref);
	   node *last = ft_lstlast((*head_ref));
	    node *sec_last = NULL;
	   while (tmp->next != last)
	   {
	   	tmp = tmp->next;
	   }
	sec_last = tmp;
	return (sec_last);
}

void ft_reverse_rotate_a(node **head_ref_a)
{
	if (list_size(*head_ref_a) > 1)
	{
	node *tmp = (*head_ref_a);
	node *sec_last=get_sec_last_a(head_ref_a);
	node *last=ft_lstlast((*head_ref_a));
	sec_last->next = NULL;
	last->next = tmp;
	(*head_ref_a) = last;
	write(1,"rra\n",5);
	}
}