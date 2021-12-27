/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:16:50 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:17:03 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_prev(node *prev_node,int x)
{
	node *n=(node*)malloc(sizeof(node));
	n->data=x;
	n->next=prev_node->next;
	prev_node->next=n;
}