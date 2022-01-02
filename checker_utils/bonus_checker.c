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

#include "../push_swap.h"

static void is_action(char *s)
{
    if(ft_strcmp(s,"sa\n") == 0 
    || ft_strcmp(s,"sb\n") ==0
    || ft_strcmp(s,"pa\n") == 0
    || ft_strcmp(s,"pb\n") == 0
    || ft_strcmp(s,"ra\n") == 0
    || ft_strcmp(s,"rb\n")  ==0
    || ft_strcmp(s,"rra\n") ==0
    || ft_strcmp(s,"rrb\n") ==0
    || ft_strcmp(s,"ss\n")  ==0
    || ft_strcmp(s,"rr\n")  ==0
    || ft_strcmp(s,"rrr\n") ==0)
    {
       
    }
    else
    {
     write(2,"ERROR\n",7);
        exit(1);
    }

}
static void is_space_there(char *s)
{
    if(ft_strstr(s," ") != NULL)
    {
        write(2,"ERROR\n",7);
        exit(1);
    }
}
static void ft_instruction_call(char *s,node **head_ref_a,node **head_ref_b)
{
    if(ft_strcmp(s,"sa\n") == 0)
            ft_swap_a(head_ref_a);
        else if (ft_strcmp(s,"sb\n")== 0)
            ft_swap_b(head_ref_b);
        else if(ft_strcmp(s,"pa\n")== 0)
            ft_push_a(head_ref_a,head_ref_b);
         else if(ft_strcmp(s,"pb\n")== 0)
             ft_push_b(head_ref_a,head_ref_b);
         else if(ft_strcmp(s,"ra\n")== 0)
            ft_rotate_a(head_ref_a);
         else if(ft_strcmp(s,"rb\n")== 0)
            ft_rotate_b(head_ref_b);
        else if(ft_strcmp(s,"rra\n")== 0)
           ft_reverse_rotate_a(head_ref_a);
        else if(ft_strcmp(s,"rrb\n")== 0)
        ft_reverse_rotate_b(head_ref_b);
        else if(ft_strcmp(s,"ss\n")== 0)
        ft_ss(head_ref_a,head_ref_b);
        else if (ft_strcmp(s,"rr\n")== 0)
        ft_rr_c(head_ref_a,head_ref_b);
        else if (ft_strcmp(s,"rrr\n")== 0)
        ft_rrr_c(head_ref_a,head_ref_b);

}

void ft_checker(node **head_ref_a , node **head_ref_b)
{
    char *act;
    act = get_next_line(0);
    while (act)
    {
       is_action(act);
        is_space_there(act);
        ft_instruction_call(act,head_ref_a,head_ref_b);
        free(act);
        act = get_next_line(0);
    }
    if(ft_check_if_sorted((*head_ref_a)) > 0)
    {
        write(1,"OK\n",4);
    }
    else
    write(1,"KO\n",4);
}
