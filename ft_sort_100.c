/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:09:29 by areheman          #+#    #+#             */
/*   Updated: 2022/05/16 16:12:22 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static int	decide_r_rr(t_list **list, int rn)
{
	int		i;
	int		j;
	int		l;
	t_list	*tmp;

	i = 0;
	j = 0;
	tmp = *list;
	while (!((tmp->index) < rn))
	{
		i++;
		tmp = tmp->next;
	}
	tmp = *list;
	l = 0;
	while (tmp && j != get_list_size(list) / 5)
	{
		if (tmp->index < rn)
			j++;
		tmp = tmp->next;
		l++;
	}
	if (i <= (get_list_size(list) - l + 1))
		return (1);
	return (-1);
}

static void	ft_sort_100_1(t_list **la, t_list **lb, int len)
{
	int	i;

	i = 0;
	if (decide_r_rr(la, len / 5))
	{
		while (i < len / 5)
		{
			while (!((*la)->index < len / 5))
				action_rab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
	else
	{
		while (i < len / 5)
		{
			while (!((*la)->index < len / 5))
				action_rrab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
}

static void	ft_sort_100_2(t_list **la, t_list **lb, int len)
{
	int		i;

	i = (len / 5);
	if (decide_r_rr(la, (len * 2 / 5)))
	{
		while (i < (len * 2 / 5))
		{
			while (!((*la)->index < (len * 2 / 5)))
				action_rab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
	else
	{
		while (i < (len * 2 / 5))
		{
			while (!((*la)->index < (len * 2 / 5)))
				action_rrab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
}

static void	ft_sort_100_3(t_list **la, t_list **lb, int len)
{
	int		i;

	i = (len * 2 / 5);
	if (decide_r_rr(la, (len * 3 / 5)))
	{
		while (i < (len * 3 / 5))
		{
			while (!((*la)->index < (len * 3 / 5)))
				action_rab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
	else
	{
		while (i < (len * 3 / 5))
		{
			while (!((*la)->index < (len * 3 / 5)))
				action_rrab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
}

static void	ft_sort_100_4(t_list **la, t_list **lb, int len)
{
	int		i;

	i = (len * 3 / 5);
	if (decide_r_rr(la, (len * 4 / 5)))
	{
		while (i < (len * 4 / 5))
		{
			while (!((*la)->index < (len * 4 / 5)))
				action_rab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
	else
	{
		while (i < (len * 4 / 5))
		{
			while (!((*la)->index < (len * 4 / 5)))
				action_rrab(la, 'a');
			action_pab(la, lb, 'b');
			i++;
		}
	}
}*/

void	ft_sort_100(t_list **la, t_list **lb)
{
	int	len;
	int	i;
	int	d;

	len = get_list_size(la);
	d = 5;
	push_division(la, lb, len, d);
	i = (len * (d - 1)) / d;
	while (i < len)
	{
		push_element_ab(la, lb, i);
		i++;
	}
	i = get_list_size(lb) - 1;
	while (i >= 0)
	{
		push_element_ba(la, lb, i);
		i--;
	}
}
