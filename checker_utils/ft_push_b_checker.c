/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:27:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 12:56:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_b(node **head_ref_a,node **head_ref_b)
{
	if((*head_ref_a) != NULL)
	{
	 node *tmp = NULL;
	tmp =(*head_ref_a);
	push(head_ref_b,tmp->data);
	(*head_ref_a) = tmp->next;
	}
}