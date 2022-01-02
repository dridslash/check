/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:19:37 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 12:56:55 by marvin           ###   ########.fr       */
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
	}
}