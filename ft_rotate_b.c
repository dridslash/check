/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:37:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 13:22:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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