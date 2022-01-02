/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:40:26 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:40:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void send_to_a(node **head_ref_a,node **head_ref_b)
{
	int index = 0;
	node *tmp = (*head_ref_b);
	int size = list_size(tmp);
		while(index < size)
		{
			ft_push_a(head_ref_a,head_ref_b);
			index++;
		}
}
