/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:14:56 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:15:13 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printlist(node *head)
{
	node *tmp= head;
	while(tmp != NULL)
	{
		printf("%d\n",tmp->data);
		tmp = tmp->next;
	}
}