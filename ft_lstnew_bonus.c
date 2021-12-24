/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:45:51 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:47:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node	*ft_lstnew(void *content)
{
	node	*newnode;

	newnode = (node *)malloc(sizeof(node));
	if (!newnode)
		return (NULL);
	newnode->data = content;
	newnode->next = NULL;
	return (newnode);
}
