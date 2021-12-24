/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:17:47 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:17:55 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pop_node(node **head_ref,int x)
{
	node *tmp = (*head_ref);
	node *prev;
	if(tmp != NULL && tmp->data == x)
	{
	prev = tmp;
	(*head_ref) = prev->next;
	free(tmp);
	}
	else
	{
	while(tmp != NULL && tmp ->data != x)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if(tmp == NULL)
		exit(1);
	prev->next = tmp->next;
	free(tmp);
	}
}