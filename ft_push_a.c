/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:24:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/24 11:51:02 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_a(node **head_ref_a,node **head_ref_b)
{
	if((*head_ref_b) != NULL)
	{
	node *tmp = (*head_ref_b);
	push(head_ref_a,tmp->data);
	(*head_ref_b) = tmp->next;
	write(1,"pa\n",4);
	}
}