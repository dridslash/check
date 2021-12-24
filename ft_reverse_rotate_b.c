/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:48:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/22 11:36:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void min_swap_rev_b(node **head_ref)
{
	if(list_size((*head_ref)) > 2)
	{
	   node *tmp=(*head_ref);
	   node *hl=NULL;
	   node *last = ft_lstlast((*head_ref));
	   while (tmp->next != last)
	   	tmp = tmp->next;
		node *sec_last = tmp;
		tmp = (*head_ref);
	   while (tmp != NULL)
	   {
		   hl = tmp->next->next;
		   if(hl ->next == NULL)
		   {
			   hl = tmp;
		   break;
		   }
		   tmp =tmp->next;
	   }
	   sec_last->next = NULL;
	   hl->next = last;
	   last->next = sec_last;
	}
}
void ft_reverse_rotate_b(node **head_ref_b)
{
	if(list_size((*head_ref_b)) > 1)
	{
	node *prev = NULL;
	node *curr = (*head_ref_b);
	node *nex = NULL;
	while(curr != NULL)
	{
		nex = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nex;
		
	}
	(*head_ref_b) = prev;
	min_swap_rev_b(head_ref_b);
	write(1,"rrb\n",5);
	}
}