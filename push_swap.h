/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:01:27 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/27 16:20:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
typedef struct node
{
	int			data;
	struct node	*next;
}node;

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *nptr);
int		ft_isdigit(int arg);
int		list_size(node *head);
void	push_back(node **head_ref , int x);
void	printlist(node *head);
int		ft_isalpha(char *chr);
int		ft_check_input(char **argv);
void	ft_swap_a(node **head_ref_a);
int		ft_check_dup(int argc,char **argv);
int		ft_check_if_sorted(node *head);
int		ft_isdigit_imp(char * arg);
void	ft_push_b(node **head_ref_a,node **head_ref_b);
void	push(node **head_ref,int x);
void	ft_rotate_a(node **head_ref_a);
node	*ft_lstlast(node *lst);
void	ft_reverse_rotate_a(node **head_ref_a);
void	ft_swap_b(node **head_ref_b);
void	ft_push_a(node **head_ref_a,node **head_ref_b);
void	ft_rotate_b(node **head_ref_b);
void	ft_rr_c(node **head_ref_a,node **head_ref_b);
void	ft_rrr_c(node **head_ref_a,node **head_ref_b);
void	ft_reverse_rotate_a(node **head_ref_b);
void	ft_ss(node **head_ref_a,node **head_ref_b);
void	ft_reverse_rotate_b(node **head_ref_b);
void	ft_radix(node **head_ref_a,node **head_ref_b);
void	ft_LiLHak_sort(char **arr,int size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_is_empty(char *arg);
#endif