/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:37:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 12:56:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void min_swap(node **head_ref)
{
	node *nod1 = (*head_ref);
	node *nod2 = NULL;
	nod2 = nod1 ->next;
	nod1->next = nod2 ->next;
	(*head_ref) = nod2;
	nod2 ->next = nod1;
}
void ft_rotate_b(node **head_ref_b)
{
	node *nod1=(*head_ref_b);
	node *tmp=(*head_ref_b)->next;
	node *last=ft_lstlast((*head_ref_b));
	nod1->next= NULL;
	last->next=nod1;
	(*head_ref_b)=tmp;
}