/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:32:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/24 15:22:50 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_index(node *head_ref,int argc,char **argv)
{
	int i =1;
	int j = 0;
	ft_LiLHak_sort(argv,argc);
	while (i < argc)
	{
		printf("index of %d is %d\n",ft_atoi(argv[i]),j);
		i++;
		j++;
	}
	j = 0;
	printf("---------------------------------------------------\n");
	j = 0;
	i = 1;
		while(head_ref != NULL)
		{
			i = 1;
			j = 0;
			while(i < argc)
			{
				if(head_ref->data == ft_atoi(argv[i]))
				{
					head_ref->data = j;
					break;
				}
				i++;
				j++;
			}
			head_ref = head_ref->next;
		}
		//head_ref = head_ref->next;
}

int main(int argc,char **argv)
{
	node *a;
	node *b = NULL;
	int i = 1;
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
	i = 1;
	while(argv[i])
	{
		push_back(&a,ft_atoi(argv[i]));
		i++;
	}
	 ft_index(a,argc,argv);
	// if(ft_check_if_sorted(a) > 0)
	// {
	// 	printf("sorted\n");
	// }
	// else
	// {
	// printf("before sort \n");
	// printf("linked list : a\n");
	// printlist(a);
	// printf("linked list : b\n");
	// printlist(b);
	//ft_radix(&a,&b);
	// printf("after sort \n");
	// 	printf("not sorted\n");	
	// }
	printf("linked list : a\n");
	printlist(a);
	// printf("linked list : b\n");
	// printlist(b);
	
	//ft_push_b(&a,&b);
	
}
