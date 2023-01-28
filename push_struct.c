/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:00:55 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 13:47:57 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_creat_element(int n, int dx)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->n = n;
	list->index = dx;
	list->next = NULL;
	return (list);
}

void	ft_add_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	if (*list)
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*list = new;
}

void	ft_add_front(t_list **list, t_list **new)
{
	t_list	*tmp;

	if (*new)
	{
		tmp = (*new)->next;
		(*new)->next = *list;
		*list = *new;
		*new = tmp;
	}
}

int	get_list_size(t_list **l)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *l;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
