/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:39:26 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:39:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min_index(node **head_ref)
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