/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:27:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 18:55:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_b(node **head_ref_a,node **head_ref_b)
{
	if((*head_ref_a) != NULL)
	{
	 node *tmp = NULL;
	 tmp =(*head_ref_a)->next;
	push(head_ref_b,(*head_ref_a)->data);
	(*head_ref_a) = tmp;
	write(1,"pb\n",4);
	}
}