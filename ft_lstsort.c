/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 10:34:54 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 12:31:37 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static void	ft_swap_ptr(t_list **ptr1, t_list **ptr2)
{
	t_list	*temp_ptr;

	temp_ptr = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp_ptr;
}

static void	ft_swap_list(t_list **begin_list,
						t_list **list1,
						t_list **list2,
						t_list *prev_list1,
						t_list *prev_list2)
{
	t_list	*temp_next;

	temp_next = (*list2)->next;

	/* if list1 is not the first element of the list */
	if (prev_list1 != NULL)
		prev_list1->next = (*list2);

	else
		(*begin_list) = (*list2);

	/* if list2 is not directly next to list1 */
	if (prev_list2 != (*list1))
	{
		(*list2)->next = (*list1)->next;
		prev_list2->next = (*list1);
	}

	else
		(*list2)->next = (*list1);

	(*list1)->next = temp_next;
	ft_swap_ptr(list1, list2);
}

static void	ft_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list1;
	t_list	*list2;
	t_list	*prev_list1;
	t_list	*prev_list2;

	list1 = (*begin_list);
	prev_list1 = NULL;
	while ((list1->next) != NULL)
	{
		list2 = list1->next;
		prev_list2 = list1;
		while (list2 != NULL)
		{
			if ((*cmp)(list1->content, list2->content) > 0)
				ft_swap_list(begin_list, &list1, &list2, prev_list1, prev_list2);

			prev_list2 = list2;
			list2 = list2->next;
		}

		prev_list1 = list1;
		list1 = list1->next;
	}
}

static int	ft_checkparams(t_list **begin_list, int (*cmp)())
{
	if ((begin_list == NULL) || (cmp == NULL))
		return (0);

	if (((*begin_list) == NULL) || (((*begin_list)->next) == NULL))
		return (0);

	return (1);
}

void	ft_lstsort(t_list **begin_list, int (*cmp)())
{
	if (ft_checkparams(begin_list, cmp))
	{
		ft_sort(begin_list, cmp);
	}
}
