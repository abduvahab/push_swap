/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:07:14 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 13:14:01 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	action_sab(t_list **list, int c)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*list)
	{
		tmp1 = *list;
		tmp2 = (*list)->next;
		tmp1->next = tmp2->next;
		tmp2->next = tmp1;
		*list = tmp2;
		if (c == 'a')
			ft_printf("sa\n");
		if (c == 'b')
			ft_printf("sb\n");
	}
}

void	action_ss(t_list **list_a, t_list **list_b)
{
	action_sab(list_a, 0);
	action_sab(list_b, 0);
	ft_printf("ss\n");
}

void	action_pab(t_list **list_a, t_list **list_b, int c)
{
	if (c == 'a')
	{
		ft_add_front(list_a, list_b);
		ft_printf("pa\n");
	}
	if (c == 'b')
	{
		ft_add_front(list_b, list_a);
		ft_printf("pb\n");
	}
}
