/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:14:56 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 22:27:10 by marvin           ###   ########.fr       */
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
	printf("\n");
}