/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:41:26 by areheman          #+#    #+#             */
/*   Updated: 2022/05/17 11:48:50 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_big(t_list **la, t_list **lb)
{
	int	len;
	int	i;
	int	d;

	len = get_list_size(la);
	d = 13;
	push_division(la, lb, len, d);
	i = (len * (d - 1)) / d;
	while (i < len - 3)
	{
		push_element_ab(la, lb, i);
		i++;
	}
	ft_sort_3(la);
	i = get_list_size(lb) - 1;
	while (i >= 0)
	{
		push_element_ba(la, lb, i);
		i--;
	}
}
