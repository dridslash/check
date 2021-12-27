/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:32:01 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 16:20:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_input(char **argv)
{
	int i=1;
	int j=0;
	while(argv[i])
	{
			if(ft_isalpha(argv[i]) || ((ft_isdigit_imp(argv[i])) == 0) || (ft_is_empty(argv[i]) == 0))
			{
				return (1);
			}	
			else
			{
				ft_atoi(argv[i]);
			}
		i++;
	}
	return (0);
}