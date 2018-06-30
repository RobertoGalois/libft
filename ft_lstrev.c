/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 07:33:32 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 12:15:30 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static void	ft_swap(t_list **begin_list, t_list **temp_prev, t_list **temp_next, t_list *new_next)
{
	*temp_next = (*begin_list)->next;
	(*begin_list)->next = new_next;
	*temp_prev = (*begin_list);
	(*begin_list) = *temp_next;
}

void	ft_lstrev(t_list **begin_list)
{
	t_list	*temp_next;
	t_list	*temp_prev;

	temp_next = NULL;
	temp_prev = NULL;
	if ((begin_list != NULL) && ((*begin_list) != NULL) && ((*begin_list)->next) != NULL)
	{
		ft_swap(begin_list, &temp_prev, &temp_next, NULL);

		while ((*begin_list)->next != NULL)
			ft_swap(begin_list, &temp_prev, &temp_next, temp_prev);

		(*begin_list)->next = temp_prev;
	}	
}
