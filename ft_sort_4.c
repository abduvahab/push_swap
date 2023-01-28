/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:24:09 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 16:49:58 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static void	ft_sort_4xxx(t_list **la, t_list **lb)
{
	t_list	*ta;
	t_list	*tb;

	ta = (*la)->next;
	tb = (*lb)->next;
	if ((ta)->index > (tb)->index)
	{
		action_pab(la, lb, 'a');
		action_rab(la, 'a');
		action_pab(la, lb, 'a');
		action_sab(la, 'a');
	}
	else
	{
		action_pab(la, lb, 'a');
		action_pab(la, lb, 'a');
		action_rab(la, 'a');
		action_rab(la, 'a');
	}
}

static void	ft_sort_4xx(t_list **la, t_list **lb)
{
	t_list	*ta;
	t_list	*tb;

	ta = (*la)->next;
	tb = (*lb)->next;
	if ((*la)->index > (tb)->index)
	{
		action_pab(la, lb, 'a');
		action_rab(la, 'a');
		action_pab(la, lb, 'a');
	}
	else
		ft_sort_4xxx(la, lb);
}

static void	ft_sort_4x(t_list **la, t_list **lb)
{
	t_list	*tmp;

	tmp = (*la)->next;
	if ((tmp)->index > (*lb)->index)
	{
		action_pab(la, lb, 'a');
		action_sab(la, 'a');
		if ((*la)->index > (*lb)->index)
			action_pab(la, lb, 'a');
		else
		{
			action_pab(la, lb, 'a');
			action_sab(la, 'a');
		}
	}
	else
		ft_sort_4xx(la, lb);
}
*/
void	ft_sort_4(t_list **la, t_list **lb)
{
	push_element_ab(la, lb, 0);
	ft_sort_3(la);
	action_pab(la, lb, 'a');
}

/*
void	ft_sort_4(t_list **la, t_list **lb)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	action_pab(la, lb, 'b');
	action_pab(la, lb, 'b');
	tmp_a = (*la)->next;
	tmp_b = (*lb)->next;
	if (((*la)->index > (tmp_a)->index) && ((*lb)->index < (tmp_b)->index))
		action_ss(la, lb);
	else
	{
		if ((*lb)->index < (tmp_b)->index)
			action_sab(lb, 'b');
		else
			action_sab(la, 'a');
	}
	if ((*la)->index > (*lb)->index)
	{
		action_pab(la, lb, 'a');
		action_pab(la, lb, 'a');
	}
	else
		ft_sort_4x(la, lb);
}*/
