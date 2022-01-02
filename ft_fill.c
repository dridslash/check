/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:04:32 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:04:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_fill(char **argv,node **head_ref_a)
{
    int i =1;
    while(argv[i])
	{
		push_back(head_ref_a,ft_atoi(argv[i]));
		i++;
	}
}