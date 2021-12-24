/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:17:17 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:17:29 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node *find_node(node **head_ref,int x)
{
	node *tmp=(*head_ref);
	while(tmp != NULL)
	{
		if(tmp ->data == x)
		{
			return tmp;
		}
		tmp = tmp->next;
	}
	return (NULL);
}