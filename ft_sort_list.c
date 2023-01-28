/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:37:26 by areheman          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:51 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list(t_list **list_a, int len)
{
	t_list	*list_b;

	list_b = NULL;
	if (len == 2)
		action_sab(list_a, 'a');
	else if (len == 3)
		ft_sort_3(list_a);
	else if (len == 4)
		ft_sort_4(list_a, &list_b);
	else if (len == 5)
		ft_sort_5(list_a, &list_b);
	else if (len > 5 && len <= 10)
		ft_sort_10(list_a, &list_b);
	else if (len > 10 && len <= 100)
		ft_sort_100(list_a, &list_b);
	else if (len > 100)
		ft_sort_big(list_a, &list_b);
}
