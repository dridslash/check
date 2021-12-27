/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:10:00 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/22 11:22:27 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap_b(node **head_ref_b)
{
	if(list_size((*head_ref_b)) > 1)
	{
	node *nod1 = (*head_ref_b);
	node *nod2 = NULL;
	nod2 = nod1 ->next;
	nod1->next = nod2 ->next;
	(*head_ref_b) = nod2;
	nod2 ->next = nod1;
	write(1,"sb\n",4);
	}
}