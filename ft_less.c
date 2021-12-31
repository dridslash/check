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

static int get_min(node **head_ref)
{
        int min=(*head_ref)->data;
        node *tmp = (*head_ref);
        while(tmp != NULL)
        {
                if(tmp->data < min)
                {
                        min = tmp->data;
                }
                tmp = tmp->next;
        }
        return(min);
}

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

static int get_min_index(node **head_ref)
{
        int i = 1;
        node *tmp = (*head_ref);
        while(tmp != NULL)
        {
                if(tmp->data == get_min(head_ref))
                {
                        return (i);
                }
                i++;
                tmp = tmp->next;
        }
        return (-1);
}
void small_handl(node **head_ref_a,node **head_ref_b)
{
        node *tmp = (*head_ref_a);
        int count = 0;
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
void macro_handl(node **head_ref_a)
{
        if(list_size((*head_ref_a)) == 2)
        {
                if(!ft_check_if_sorted((*head_ref_a)))
                ft_swap_a(head_ref_a);
        }
}
void pro_min(node **head_ref_a,node **head_ref_b)
{
        int max =find_big_digit(head_ref_a);
         while(get_min_index(head_ref_a) != 1 && get_min(head_ref_a) < max )
        {
                ft_rotate_a(head_ref_a);
        }
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

static void sort_separ(node **head_ref_a,node **head_ref_b)
{
        small_handl(head_ref_a,head_ref_b);
}
void bigech_handl(node **head_ref_a,node **head_ref_b)
{
        node * tmp = (*head_ref_a);
        int count = 0;
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
        sort_separ(head_ref_a,head_ref_b);
        send_to_a(head_ref_a,head_ref_b);
}
