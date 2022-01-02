/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:38:14 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:38:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min(node **head_ref)
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