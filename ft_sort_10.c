/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:57:26 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 17:04:56 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_10(t_list **la, t_list **lb)
{
	int	i;
	int	len;

	i = 0;
	len = get_list_size(la);
	while (i < (len -3))
	{
		push_element_ab(la, lb, i);
		i++;
	}
	ft_sort_3(la);
	while (i >= 0)
	{
		action_pab(la, lb, 'a');
		i--;
	}
}
