/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:11:44 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/20 16:58:21 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int ft_check_dup(int argc,char **argv)
{
	int i=1;
	int j=0;
	while (argv[i])
	{
		j = i + 1;
		while(argv[j])
		{
			if(ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
	
}