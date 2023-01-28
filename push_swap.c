/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:04:36 by areheman          #+#    #+#             */
/*   Updated: 2022/05/16 17:26:32 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(int *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	ft_free_list(t_list **list)
{
	t_list	*current;
	t_list	*next;

	if (*list)
	{
		current = *list;
		while (current->next)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*list = NULL;
	}
}

int	main(int argv, char *args[])
{
	int		*tab;
	t_list	*list_a;
	int		len;

	len = 0;
	if (argv > 1)
	{
		tab = ft_check_error(argv, args, &len);
		if (!tab)
		{
			ft_printf("Error\n");
			return (0);
		}
		if (is_sorted(tab, len))
			return (0);
		list_a = ft_read_tab(tab, len);
		free(tab);
		ft_sort_list(&list_a, len);
		ft_free_list(&list_a);
	}
	return (0);
}
