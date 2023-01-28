/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:11:15 by areheman          #+#    #+#             */
/*   Updated: 2022/05/16 13:03:56 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	my_index(t_list **la, int n)
{
	int		i;
	t_list	*tmp;

	tmp = *la;
	i = 0;
	while (tmp)
	{
		if (tmp->index == n)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (-1);
}

void	push_element_ab(t_list **la, t_list **lb, int c)
{
	int	l;

	l = get_list_size(la);
	while (my_index(la, c) != 0)
	{
		if (my_index(la, c) > (l / 2))
			action_rrab(la, 'a');
		else
			action_rab(la, 'a');
	}
	action_pab(la, lb, 'b');
}

void	push_element_ba(t_list **la, t_list **lb, int c)
{
	int	l;

	l = get_list_size(lb);
	while (my_index(lb, c) != 0)
	{
		if (my_index(lb, c) > (l / 2))
			action_rrab(lb, 'b');
		else
			action_rab(lb, 'b');
	}
	action_pab(la, lb, 'a');
}
