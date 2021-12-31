/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:52:15 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/31 02:26:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrr_c(node **head_ref_a,node **head_ref_b)
{
 ft_reverse_rotate_a(head_ref_a);
 ft_reverse_rotate_b(head_ref_b);
	write(1,"rrr\n",5);
}