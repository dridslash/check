/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:27:52 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:48:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiter(node *lst, void (*f)(void*))
{
	if (lst && f)
	{
		while (lst)
		{
			(*f)(lst->data);
			lst = lst->next;
		}
	}
}
