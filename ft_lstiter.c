/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:07:11 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 06:01:28 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void   ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if ((lst != NULL) && (f != NULL))
	{
		while (lst != NULL)
		{
			(*f)(lst);
			lst = lst->next;
		}
	}
}
