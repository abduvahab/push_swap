/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:27:49 by areheman          #+#    #+#             */
/*   Updated: 2022/05/12 17:03:27 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_index(int *tab, int n, int len)
{
	int	i;
	int	j;

	i = 0 ;
	j = 0;
	while (i < len)
	{
		if (n > tab[i])
			j++;
		i++;
	}
	return (j);
}

t_list	*ft_read_tab(int *tab, int len)
{
	int		i;
	int		index;
	t_list	*list_a;
	t_list	*next;

	i = 0;
	index = ft_get_index(tab, tab[i], len);
	list_a = ft_creat_element(tab[i++], index);
	while (i < len)
	{
		index = ft_get_index(tab, tab[i], len);
		next = ft_creat_element(tab[i], index);
		ft_add_back(&list_a, next);
		i++;
	}
	return (list_a);
}
