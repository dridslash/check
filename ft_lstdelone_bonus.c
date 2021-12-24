/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:11:07 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:49:04 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void del(void *content)
{
	free(content);
}
void	ft_lstdelone(node *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		(*del)(lst->data);
		free(lst);
	}
	lst = NULL;
}
/*int main(void)
{
	t_list *head=NULL;
	head=malloc(sizeof(t_list));
	head->content=ft_strdup("hel");
	head->next=NULL;
	ft_lstdelone(head,del);
	printf("%s\n",head->content);
}*/