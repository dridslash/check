/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:24:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/28 16:04:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_a(node **head_ref_a,node **head_ref_b)
{
	if((*head_ref_b) != NULL)
	{
	push(head_ref_a,(*head_ref_b)->data);
	(*head_ref_b) = (*head_ref_b)->next;
	write(1,"pa\n",4);
	}
}