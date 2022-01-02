/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:15:49 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/02 18:23:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push(node **head_ref,int x)
{
	node *n = (node *)malloc(sizeof(node)); 
	n->data = x;
	if((*head_ref) == NULL)
	{
		(*head_ref) = n;
		n->next = NULL;
	}
	else
	{
		n->next = (*head_ref);
		(*head_ref) = n;
	}
}