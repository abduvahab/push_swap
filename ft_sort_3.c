/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:09:11 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 15:50:55 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_aaa(int a0, int a1, int a2, t_list **l)
{
	if ((a0 < a1 && a0 < a2) && (a1 > a2))
	{
		action_sab(l, 'a');
		action_rab(l, 'a');
	}
	if (a2 < a1 && a2 < a0)
	{
		if (a1 > a0)
			action_rrab(l, 'a');
		else
		{
			action_sab(l, 'a');
			action_rrab(l, 'a');
		}
	}
	if (a1 < a0 && a1 < a2)
	{
		if (a0 < a2)
			action_sab(l, 'a');
		else
			action_rab(l, 'a');
	}
}

void	ft_sort_3(t_list **l)
{
	int	a0;
	int	a1;
	int	a2;

	a0 = (*l)->n;
	a1 = ((*l)->next)->n;
	a2 = (((*l)->next)->next)->n;
	sort_aaa(a0, a1, a2, l);
}
