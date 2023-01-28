/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:19:42 by areheman          #+#    #+#             */
/*   Updated: 2022/05/10 17:00:25 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_str_len(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	*ft_save_tab(char **s, int len)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
	{
		ft_printf("hata\n");
		return (0);
	}
	i = 0;
	while (i < len)
	{
		tab[i] = ft_atoi(s[i]);
		i++;
	}
	return (tab);
}

int	*ft_check_error(int argv, char **s, int *len)
{
	char	**strs;
	int		*tab;
	int		flag;

	if (argv == 2)
	{
		flag = 0;
		strs = ft_split(s[1], ' ');
		if ((!is_digit(strs, flag)) || (big_integer(strs, flag)) \
				|| (is_duplicate(strs, flag)))
			return (0);
		*len = ft_str_len(strs);
		tab = ft_save_tab(strs, *len);
		free(strs);
	}
	else
	{
		flag = 1;
		if ((!is_digit(s, flag)) || (big_integer(s, flag)) \
				|| (is_duplicate(s, flag)))
			return (0);
		*len = ft_str_len(s + 1);
		tab = ft_save_tab((s + 1), *len);
	}
	return (tab);
}
