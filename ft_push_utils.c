/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:34:18 by areheman          #+#    #+#             */
/*   Updated: 2022/05/10 15:43:12 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_digit(char **s, int flag)
{
	int	i;
	int	j;

	i = flag;
	while (s[i])
	{
		j = 0;
		while (is_space(s[i][j]))
			j++;
		if (s[i][j] == '-' || s[i][j] == '+')
			j++;
		while (s[i][j])
		{
			if (!ft_isdigit(s[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atolg(char *s)
{
	int		i;
	long	rs;
	long	sn;

	i = 0;
	sn = 1;
	rs = 0;
	while (is_space(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sn = -1;
		i++;
	}
	while (s[i])
	{
		rs = rs * 10 + (s[i] - 48);
		i++;
	}
	if ((rs * sn) > 2147483647 || (rs * sn) < -2147483648)
		return (1);
	return (0);
}

int	big_integer(char **s, int flag)
{
	int	i;

	i = flag;
	while (s[i])
	{
		if (ft_atolg(s[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_duplicate(char **s, int flag)
{
	int	i;
	int	j;
	int	l;

	l = 0;
	while (s[l])
		l++;
	i = flag;
	while (i < l - 1)
	{
		j = i + 1;
		while (j < l)
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
