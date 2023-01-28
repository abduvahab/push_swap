/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_division.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:50:01 by areheman          #+#    #+#             */
/*   Updated: 2022/05/17 11:54:24 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static int	decide_r_rr(t_list **list, int rn, int d)
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
//	while (tmp && j != get_list_size(list) / d)
	while (tmp && j != d)
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

static void	loop_rab_pab(t_list **la, t_list **lb, int c)
{
	while (!((*la)->index < c))
	{
		action_rab(la, 'a');
	}
	action_pab(la, lb, 'b');
//	if ((s % 2 == 1) && (*lb)->next && (s < c))
//		action_rr(lb, la);
}

static void	loop_rrab_pab(t_list **la, t_list **lb, int c)
{

	while (!((*la)->index < c))
	{
		action_rrab(la, 'a');
	}
	action_pab(la, lb, 'b');
//	if ((s % 2 == 1) && (*lb)->next)
//		action_rab(lb, 'b');

}





void	push_division(t_list **la, t_list **lb, int len, int d)
{
	int	i;
	int	s;

	i = 1;
	while (i < d)
	{
		s = len * (i - 1) / d;
		if (decide_r_rr(la, ((len * i) / d), len / d))
		{
		//	s = len * (i - 1) / d;
			while (s++ < (len * i / d))
			{
				loop_rab_pab(la, lb, ((len * i) / d));
			}
		}
		else
		{
			while (s++ < (len * i / d))
				loop_rrab_pab(la, lb, ((len * i) / d));
		}
		i++;
	}
}
*/
static int	decide_r_rr(t_list **list, int rn, int s)
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
	while (tmp && j != rn - s)
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

static void	loop_rab_pab(t_list **la, t_list **lb, int c)
{
	while (!((*la)->index < c))
	{
		action_rab(la, 'a');
	}
	action_pab(la, lb, 'b');
}

static void	loop_rrab_pab(t_list **la, t_list **lb, int c)
{
	while (!((*la)->index < c))
	{
		action_rrab(la, 'a');
	}
	action_pab(la, lb, 'b');
}

void	push_division(t_list **la, t_list **lb, int len, int d)
{
	int	i;
	int	s;

	i = 1;
	while (i < d)
	{
		s = len * (i - 1) / d;
		while (s < (len * i / d))
		{
			if (decide_r_rr(la, ((len * i) / d), s))
			{
				loop_rab_pab(la, lb, (len * i / d));
			}
			else
			{
				loop_rrab_pab(la, lb, (len * i / d));
			}
			s++;
		}
		i++;
	}
}
