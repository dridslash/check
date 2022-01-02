/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:49:58 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/02 17:40:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rr_c(node **head_ref_a,node **head_ref_b)
{
	 ft_rotate_a(head_ref_a);
	 ft_rotate_b(head_ref_b);
}