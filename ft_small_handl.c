/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_handl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:51:44 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:51:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void small_handl(node **head_ref_a,node **head_ref_b)
{
        node *tmp = (*head_ref_a);
        if(get_min_index(head_ref_a) == 2)
        {
                if(tmp->data > (tmp->next->next)->data)
                {
                        ft_rotate_a(head_ref_a);
                }
                else
                ft_swap_a(head_ref_a);
        }
        else if (get_min_index(head_ref_a) == 3)
        {
                if(tmp->data > tmp->next->data)
                {
                        ft_swap_a(head_ref_a);
                        ft_reverse_rotate_a(head_ref_a);
                }
                else
                ft_reverse_rotate_a(head_ref_a);
        }
        else if (get_min_index(head_ref_a) == 1) 
        {
                if(tmp->next->data > tmp->next->next->data)
                {
                        ft_push_b(head_ref_a,head_ref_b);
                        ft_swap_a(head_ref_a);
                        ft_push_a(head_ref_a,head_ref_b);
                }
        }
}