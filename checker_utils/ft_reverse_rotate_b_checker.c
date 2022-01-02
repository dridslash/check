/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b_checker.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:48:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 12:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static node *get_sec_last_b(node **head_ref)
{
	   node *tmp=(*head_ref);
	   node *last = ft_lstlast((*head_ref));
	   while (tmp->next != last)
	   	tmp = tmp->next;
		node *sec_last = tmp;
	return (sec_last);
}
void ft_reverse_rotate_b(node **head_ref_b)
{
	if (list_size(*head_ref_b) > 1)
	{
	node *tmp = (*head_ref_b);
	node *sec_last=get_sec_last_b(head_ref_b);
	node *last=ft_lstlast((*head_ref_b));
	sec_last->next = NULL;
	last->next = tmp;
	(*head_ref_b) = last;
	}
}