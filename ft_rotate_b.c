/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:37:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/22 15:06:08 by mnaqqad          ###   ########.fr       */
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
	write(1,"rb\n",4);
	
}