/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:16:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 13:34:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_back(node **head_ref , int x)
{
	node *n=(node *)malloc(sizeof(node));
	node *tmp;
	n->data = x;
	if ((*head_ref) == NULL)
	{
		(*head_ref) = n;
		n->next = NULL;
	}
	else
	{
		tmp = (*head_ref);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
		n ->next = NULL;
	}
}