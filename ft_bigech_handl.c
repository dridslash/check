/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigech_handl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:52:52 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:52:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void bigech_handl(node **head_ref_a,node **head_ref_b)
{
        node * tmp = (*head_ref_a);
        int size =list_size((*head_ref_a));
        int max =find_big_digit(head_ref_a);
        int i =0;
        while(i < size)
        {
                tmp = (*head_ref_a);
                while (get_min_index(head_ref_a) != 1 && get_min(head_ref_a) < max && get_min(head_ref_a) < 2)
                {
                        ft_rotate_a(head_ref_a);
                }
                tmp = (*head_ref_a);
                if(tmp ->data != max && tmp->data < 2)
                ft_push_b(head_ref_a,head_ref_b);
                i++;
        }
        
}
