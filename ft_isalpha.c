/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:18 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/20 19:57:30 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(char *chr)
{
	int i=0;
	while (chr[i])
	{
	if ((chr[i] >= 65 && chr[i] <= 90) || (chr[i] >= 97 && chr[i] <= 122))
	{
		return (1);
	}
	i++;
	}
	return (0);
}
