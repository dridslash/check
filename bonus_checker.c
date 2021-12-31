/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 17:04:57 by marvin            #+#    #+#             */
/*   Updated: 2021/12/30 17:04:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_instruction_call(char *s,node **head_ref_a,node **head_ref_b)
{
    if(s == "sa")
    {
        printf("\nim in sa");
            ft_swap_a(head_ref_a);
    }
        else if (s == "sb")
            ft_swap_b(head_ref_b);
        else if(s == "pa")
            ft_push_a(head_ref_a,head_ref_b);
         else if(s == "pb")
             ft_push_b(head_ref_a,head_ref_b);
         else if(s == "ra")
            ft_rotate_a(head_ref_a);
         else if(s == "rb")
            ft_rotate_b(head_ref_b);
        // else if(s == "rra")
        //    ft_reverse_rotate_a(head_ref_a);
        // else if(s == "rrb")
        // ft_reverse_rotate_b(head_ref_b);
        // else if(s == "ss")
        // ft_ss(head_ref_a,head_ref_b);
        // else if (s == "rr")
        // ft_rr_c(head_ref_a,head_ref_b);
        // else if (s == "rrr")
        // ft_rrr_c(head_ref_a,head_ref_b);
}

void ft_checker(node **head_ref_a , node **head_ref_b)
{
    char *act;
    act = ft_strdup("");
  while(1 && get_next_line(0))
  {
      act = ft_strjoin(get_next_line(0),act);
  }
  printf("%s",act);
}
