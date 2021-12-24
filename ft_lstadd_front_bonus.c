/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:01:36 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:49:26 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(node **lst, node *new)
{
	if (*lst != NULL)
	{
		new->next = (*lst);
		*lst = new;
	}
	else
	{
		*lst = new;
	}
}
/*int main(void)
{
	t_list *head;
	head=malloc(sizeof(t_list));
	head->content=ft_strdup("h1");
	head ->next=NULL;
	t_list *node;
	node=NULL;
	node=ft_lstnew(ft_strdup("h2"));
	ft_lstadd_front(&head,node);
	while(head)
	{
		printf("%s\n",head->content);
		head=head->next;
	}
}*/