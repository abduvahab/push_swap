/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:51 by areheman          #+#    #+#             */
/*   Updated: 2022/05/16 16:19:16 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"

typedef struct g_list
{
	int				n;
	int				index;
	struct g_list	*next;
}				t_list;

int		*ft_check_error(int argv, char **s, int *len);
int		ft_atolg(char *s);
int		big_integer(char **s, int flag);
int		is_duplicate(char **s, int flag);
int		is_space(int c);
int		is_digit(char **s, int flag);
int		get_list_size(t_list **list);
int		my_index(t_list **list, int c);
t_list	*ft_read_tab(int *tab, int len);
t_list	*ft_creat_element(int n, int dx);
void	push_element_ab(t_list **list_a, t_list **list_b, int c);
void	push_element_ba(t_list **list_a, t_list **list_b, int c);
void	ft_add_back(t_list **list, t_list *new);
void	ft_add_front(t_list **list, t_list **new);
void	action_sab(t_list **list, int c);
void	action_ss(t_list **list_a, t_list **list_b);
void	action_pab(t_list **list_a, t_list **list_b, int c);
void	action_rab(t_list **list, int c);
void	action_rr(t_list **list_a, t_list **list_b);
void	action_rrab(t_list **list, int c);
void	action_rrr(t_list **list_a, t_list **list_b);
void	ft_sort_list(t_list **list_a, int len);
void	ft_sort_3(t_list **list_a);
void	ft_sort_4(t_list **list_a, t_list **list_b);
void	ft_sort_5(t_list **list_a, t_list **list_b);
void	ft_sort_10(t_list **list_a, t_list **list_b);
void	ft_sort_100(t_list **list_a, t_list **list_b);
void	push_division(t_list **list_a, t_list **list_b, int len, int d);
void	ft_sort_big(t_list **list_a, t_list **list_b);

#endif
