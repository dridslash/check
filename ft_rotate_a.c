/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:12:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 17:22:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rotate_a(node **head_ref_a)
{
	int size = list_size((*head_ref_a));
	if(size > 2)
	{
	node *nod1=(*head_ref_a);
	node *tmp=(*head_ref_a)->next;
	node *last=ft_lstlast((*head_ref_a));
	nod1->next= NULL;
	last->next=nod1;
	(*head_ref_a)=tmp;
	write(1,"ra\n",4);
	}
	
}