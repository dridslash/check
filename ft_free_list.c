/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:18:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:18:24 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(node **head_ref)
{
	node *tmp=(*head_ref);
	node *next;
	while(tmp != NULL)
	{
		next = tmp -> next;
		free(tmp);
		tmp = next;
	}
	(*head_ref) = NULL;
}