/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:32:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/01 15:23:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc,char **argv)
{
	node *a = NULL;
	node *b = NULL;
	if(ft_check_input(argv) == 1)
	{
		write(2,"ERROR\n",7);
		exit(1);
	}
	if(ft_check_dup(argv) == 1)
	{
		write(2,"ERROR\n",7);
		exit(1);
	}
	ft_fill(argv,&a);
	ft_index(a,argc,argv);
	printf("before sort \n");
	printf("linked list : a\n");
	printlist(a);
	if(ft_check_if_sorted(a) > 0)
	{
		write(1,"stack sorted\n",14);
	}
	else
	{
		if(list_size(a) > 10)
		ft_radix(&a,&b);
		else if (list_size(a) <= 10)
		ft_less(&a,&b);
	}
	// {
	// 	printf("sorted\n");
	// }
	// else
	// {
	
	// printf("linked list : b\n");
	// printlist(b);
	// ft_radix(&a,&b);
	//small_handl(&a,&b);
	// bigech_handl(&a,&b);
	//ft_swap_a(&a);
	//ft_rotate_a(&a);
	//ft_push_b(&a,&b);
	// ft_push_a(&a,&b);
	//ft_reverse_rotate_a(&a);
	// //--------------------//
	printf("after sort \n");
	printf("linked list : a\n");
	printlist(a);
	// printf("\n---------------------------------\n");	
	printf("\n---------------------------------\n");
	printf("linked list : b\n");
	printlist(b);
	
	//ft_push_b(&a,&b);
	
}
	// while (i < argc)
	// {
	// 	printf("index of %d is %d\n",ft_atoi(argv[i]),j);
	// 	i++;
	// 	j++;
	// }
	// j = 0;
	// printf("---------------------------------------------------\n");
	// j = 0;
	// i = 1;