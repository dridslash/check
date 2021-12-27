/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:06 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 22:29:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int find_big_digit(node **head_ref_a)
{
	node *tmp = (*head_ref_a);
	int max = 0;
	while (tmp != NULL)
	{
		if(tmp->data > max)
		{
			max = tmp->data;
		}
		tmp = tmp->next;
	}
	return (max);
}
static unsigned int count_bits(int m)
{
   unsigned int count = 0;
   while (m)
   {
        count++;
        m >>= 1;
    }
	return(count);
}
static void send_to_a(node **head_ref_a,node **head_ref_b)
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
void ft_radix(node **head_ref_a,node **head_ref_b)
{
	     unsigned int max = find_big_digit(head_ref_a);
		 unsigned int max_bits = count_bits(max);
		 node *tmp = (*head_ref_a);
		 int size = list_size(tmp);
		unsigned int index = 0;
		int i =0;
		while (i < max_bits)
		{
			index = 0;
				//printf("not sorted\n");
			while(index < size)
			{
				tmp = (*head_ref_a);
				if(((tmp->data>>i)&1) == 1)
				{
					ft_rotate_a(head_ref_a);
				}
				else if(ft_check_if_sorted((*head_ref_a)) <= 0)
				{
					ft_push_b(head_ref_a,head_ref_b);
				}
				index++;
			}
			send_to_a(head_ref_a,head_ref_b);
			i++;
		}
}