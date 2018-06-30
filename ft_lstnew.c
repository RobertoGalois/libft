/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:05:21 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 10:28:47 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void	ft_init_emptylist(t_list *list)
{
	list->content = NULL;
	list->content_size = 0;
}

void	ft_init_filledlist(t_list *list, void const *p_cont, size_t p_contsize)
{
	ft_memcpy(list->content, p_cont, p_contsize);
	list->content_size = p_contsize;
}

t_list *ft_lstnew(void const *p_content, size_t p_content_size)
{
	t_list	*ret_list;

	ret_list = (t_list *)(ft_memalloc(sizeof (t_list)));
	if (ret_list == NULL)
		return (NULL);

	if (p_content == NULL)
		ft_init_emptylist(ret_list);

	else
	{
		ret_list->content = ft_memalloc(p_content_size);
		if (ret_list->content == NULL)
		{
			ft_memdel((void **)(&ret_list));
			return (NULL);
		}

		else
			ft_init_filledlist(ret_list, p_content, p_content_size);
	}

	ret_list->next = NULL;
	return (ret_list);
}
