/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:52:19 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 19:59:54 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	action_rab(t_list **list, int c)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *list;
	tmp2 = (*list)->next;
	ft_add_back(list, tmp1);
	tmp1->next = NULL;
	*list = tmp2;
	if (c == 'a')
		ft_printf("ra\n");
	if (c == 'b')
		ft_printf("rb\n");
}

void	action_rr(t_list **list_a, t_list **list_b)
{
	action_rab(list_a, 0);
	action_rab(list_b, 0);
	ft_printf("rr\n");
}

void	action_rrab(t_list **list, int c)
{
	t_list	*last;
	t_list	*tmp;

	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp;
	tmp = *list;
	while (tmp->next != last)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = *list;
	*list = last;
	if (c == 'a')
		ft_printf("rra\n");
	if (c == 'b')
		ft_printf("rrb\n");
}

void	action_rrr(t_list **list_a, t_list **list_b)
{
	action_rrab(list_a, 0);
	action_rrab(list_b, 0);
	ft_printf("rrr\n");
}
