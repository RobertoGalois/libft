/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:07:38 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 22:47:44 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static void	del_elem(void *content, size_t size_content)
{
	ft_memdel(content);
	size_content++;
}

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret_list;
	t_list	*src_list;
	t_list	*new_list;

	ret_list = NULL;
	if ((lst != NULL) && (f != NULL))
	{
		while (lst != NULL)
		{
			src_list = (*f)(lst);
			new_list = ft_lstnew(src_list->content, src_list->content_size);
			if (new_list == NULL)
			{
				ft_lstdel(&ret_list, del_elem);
				return (NULL);
			}

			ft_lstaddback(&ret_list, new_list);
			lst = lst->next;
		}
	}

	return (ret_list);
}
