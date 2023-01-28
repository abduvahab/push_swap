/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:20:56 by areheman          #+#    #+#             */
/*   Updated: 2022/05/14 16:14:18 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5(t_list **la, t_list **lb)
{
	push_element_ab(la, lb, 0);
	push_element_ab(la, lb, 1);
	ft_sort_3(la);
	action_pab(la, lb, 'a');
	action_pab(la, lb, 'a');
}
