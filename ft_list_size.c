/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:15:27 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/21 11:15:40 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int list_size(node *head)
{
	int i;
	
	i = 0;
	while (head != NULL)
	{
		i++;
		head = head ->next;
	}
	return (i);
}