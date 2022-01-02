/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a_checker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:12:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 12:56:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rotate_a(node **head_ref_a)
{
	node		*nod1;
	node		*last;

	if (list_size(*head_ref_a) > 1)
	{
	nod1 = *head_ref_a;
	last = ft_lstlast(nod1);
	*head_ref_a = nod1->next;
	nod1->next = NULL;
	last->next = nod1;
	}
}