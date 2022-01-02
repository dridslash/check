/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:52:08 by marvin            #+#    #+#             */
/*   Updated: 2021/12/28 18:52:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void bigech_handl_pro(node **head_ref_a,node **head_ref_b)
{
        node * tmp = (*head_ref_a);
        int size =list_size((*head_ref_a));
        int max =find_big_digit(head_ref_a);
        int i =0;
        while(i < size)
        {
                tmp = (*head_ref_a);
                while (get_min_index(head_ref_a) != 1 && get_min(head_ref_a) < max)
                {
                        ft_rotate_a(head_ref_a);
                }
                tmp = (*head_ref_a);
                if(tmp ->data != max)
                ft_push_b(head_ref_a,head_ref_b);
                i++;
        }
        
}

static void macro_handl(node **head_ref_a)
{
        if(list_size((*head_ref_a)) == 2)
        {
                if(!ft_check_if_sorted((*head_ref_a)))
                ft_swap_a(head_ref_a);
        }
}
// static void pro_min(node **head_ref_a)
// {
//         int max =find_big_digit(head_ref_a);
//          while(get_min_index(head_ref_a) != 1 && get_min(head_ref_a) < max )
//         {
//                 ft_rotate_a(head_ref_a);
//         }
// }

void ft_less(node **head_ref_a,node **head_ref_b)
{
        if(list_size((*head_ref_a)) <= 3)
        {
                if (list_size((*head_ref_a)) == 3)
                small_handl(head_ref_a,head_ref_b);
                else
                macro_handl(head_ref_a);
        }
        else if(list_size(*head_ref_a) <= 10)
        {
                bigech_handl(head_ref_a,head_ref_b);
                if(list_size((*head_ref_a)) == 3)
                {
                        sort_separ(head_ref_a,head_ref_b);
                        send_to_a(head_ref_a,head_ref_b);
                }
                else if(list_size((*head_ref_a)) == 2)
                {
                        macro_handl(head_ref_a);
                        send_to_a(head_ref_a,head_ref_b);
                }
                else if(list_size((*head_ref_a)) >= 5 || list_size((*head_ref_a)) < 5)
                {
                        bigech_handl_pro(head_ref_a,head_ref_b);
                        send_to_a(head_ref_a,head_ref_b);
                }
        }
}