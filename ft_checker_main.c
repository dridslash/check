/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:18:08 by marvin            #+#    #+#             */
/*   Updated: 2021/12/30 19:18:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_fill(int argc ,char **argv,node **head_ref_a)
{
    int i =1;
    while(argv[i])
	{
		push_back(head_ref_a,ft_atoi(argv[i]));
		i++;
	}
}
int main (int argc,char **argv)
{
    node *a = (node *)malloc(sizeof(node));
	node *b = (node *)malloc(sizeof(node));

	a = NULL;
	b = NULL;
	if(ft_check_input(argv) == 1)
	{
		write(2,"ERROR\n",7);
		exit(1);
	}
	if(ft_check_dup(argc,argv) == 1)
	{
		write(2,"ERROR\n",7);
		exit(1);
	}
	ft_fill(argc,argv,&a);
	ft_index(a,argc,argv);
	if(ft_check_if_sorted(a) > 0)
	{
		write(1,"OK\n",4);
	}
	else
    {
        ft_checker(&a,&b);
    }
}