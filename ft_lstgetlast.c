/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 07:20:19 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 07:21:44 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstgetlast(t_list *list)
{
	t_list	*ret;

	ret = NULL;
	while (list != NULL)
	{
		ret = list;
		list = list->next;
	}

	return (ret);
}
