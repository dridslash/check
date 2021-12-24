/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:15:27 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:49:46 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(node **lst, node *new)
{
	node	*head;

	head = NULL;
	if ((*lst) == NULL)
	{
		(*lst) = new;
	}
	else
	{
		head = *lst;
		while (head->next)
		head = head->next;
		head->next = new;
	}
}
