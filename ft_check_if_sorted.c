/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:29:45 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/24 12:09:44 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int ft_check_if_sorted(int argc ,char **argv)
// {
// 	int i=1;
// 	int count = 0;
// 	while(i < argc - 1)
// 	{
// 		if(ft_atoi(argv[i]) <= ft_atoi(argv[i + 1]))
// 		{
// 			count ++;
// 		}
// 		else
// 		{
// 			count = 0;
// 			break;
// 		}
// 		i++;
// 	}
// 	return (count);
// }
int ft_check_if_sorted(node *head)
{
	int count = 0;
	if(list_size(head) == 1)
		return (1);
	if (head != NULL)
	{
	node *curr;
	while(head->next != NULL)
	{
		curr = head->next;
		if(head->data < curr->data)
		{
			count++;
		}
		else
		{
			count=0;
			break;
		}
		head=head->next;
	}
	}
	return(count);
}
// int main(int argc,char **argv)
// {
// 	printf("%d\n",ft_check_if_sorted(argc,argv));
// }