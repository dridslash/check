/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:27:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/23 19:54:20 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_b(node **head_ref_a,node **head_ref_b)
{
	if((*head_ref_a) != NULL)
	{
	node *tmp = (*head_ref_a);
	push(head_ref_b,tmp->data);
	(*head_ref_a) = tmp->next;
	write(1,"pb\n",4);
	}
}