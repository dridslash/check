/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:50:45 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:49:12 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*void del(void *content)
{
	content=ft_strdup("");
}*/
void	ft_lstclear(node **lst, void (*del)(void*))
{
	node	*l;

	l = (*lst);
	if (l != NULL && del != NULL)
	{
		while (l != NULL)
		{
			l = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = l;
		}
	}
}
/*void printl(void *content)
{
	printf("%s\n",content);
}
int main(void)
{
	t_list *head;
	head=malloc(sizeof(t_list));
	head->content=ft_strdup("h1");
	head ->next=NULL;
	t_list *node;
	node=NULL;
	node=ft_lstnew(ft_strdup("h2"));
	ft_lstadd_front(&head,node);

	//ft_lstiter(head,printl);
	
		
	
	//ft_lstclear(&head,del);
	ft_lstiter(head,printl);
}*/