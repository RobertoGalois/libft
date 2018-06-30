/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 09:18:22 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 19:20:03 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<string.h>
#include	"libft.h"

static void	ft_del_first(t_list **begin_list, t_list **list,
						t_list **temp_prev, void (*del)(void *, size_t))
{
	*temp_prev = (*list)->next;
	ft_lstdelone(list, del);
	(*list) = (*temp_prev);
	(*begin_list) = (*temp_prev);
}

static void	ft_del_last(t_list **list, t_list *temp_prev,
						void (*del)(void *, size_t))
{
	ft_lstdelone(list, del);
	temp_prev->next = NULL;
}

static void	ft_del_middle(t_list **list, t_list *temp_prev,
							void (*del)(void *, size_t))
{
	temp_prev->next = (*list)->next;
	ft_lstdel(list, del);
	(*list) = temp_prev->next;
}

static void	ft_next(t_list **list, t_list **temp_prev)
{
	*temp_prev = *list;
	*list = (*list)->next;
}

void	ft_lstremove(t_list **begin_list, void *data_ref, int (*cmp)(),
					void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*temp_prev;

	if ((begin_list != NULL) && (*begin_list != NULL)
			&& (cmp != NULL) && (cmp != NULL))
	{
		list = (*begin_list);
		temp_prev = NULL;
		while (list != NULL)
		{
			if ((*cmp)(data_ref, list->content) == 0)
			{
				if (temp_prev == NULL)
					ft_del_first(begin_list, &list, &temp_prev, del);

				else if ((*begin_list)->next == NULL)
					ft_del_last(&list, temp_prev, del);

				else
					ft_del_middle(&list, temp_prev, del);
			}

			else
				ft_next(&list, &temp_prev);
		}
	}
}
