/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:19:37 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/22 11:07:19 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap_a(node **head_ref_a)
{
	if(list_size((*head_ref_a)) > 1)
	{
	node *nod1 = (*head_ref_a);
	node *nod2 = NULL;
	nod2 = nod1 ->next;
	nod1->next = nod2 ->next;
	(*head_ref_a) = nod2;
	nod2 ->next = nod1;
	write(1,"sa\n",4);
	}
}