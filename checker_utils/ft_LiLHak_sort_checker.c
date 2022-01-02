/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_LiLHak_sort_checker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:26:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/02 18:02:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_LiLHak_sort(char **arr,int size)
{
	int i = 1;
	int j = 1;
	char *tmp;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(arr[i]) > ft_atoi(arr[j]))
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				
			}
			j++;
		}
		i++;
	}
}
// int main(int argc,char **argv)
// {
// 	int j = 1;
// 	ft_LiLHak_sort(argv,argc);
// 	while (j < argc)
// 	{
// 		printf("%s\n",argv[j]);
// 		j++;
// 	}
// }