/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:06 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/02 17:11:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int count_bits(int m)
{
   int count = 0;
   while (m)
   {
        count++;
        m >>= 1;
    }
	return(count);
}

void ft_radix(node **head_ref_a,node **head_ref_b)
{
	printf("im radix");
	      int max = find_big_digit(head_ref_a);
		  int max_bits = count_bits(max);
		 node *tmp = (*head_ref_a);
		 int size = list_size(tmp);
		 int index = 0;
		int i =0;
		while (i < max_bits)
		{
			index = 0;
			while(index < size)
			{
				tmp = (*head_ref_a);
				if((((tmp->data)>>i)&1)==1)
				{
					ft_rotate_a(head_ref_a);
				}
				else if(ft_check_if_sorted(tmp) == 0)
				{
					ft_push_b(head_ref_a,head_ref_b);
				}
				index++;
			}
			send_to_a(head_ref_a,head_ref_b);
			i++;
		}
}