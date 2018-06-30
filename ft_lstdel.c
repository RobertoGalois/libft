/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:06:41 by robert0           #+#    #+#             */
/*   Updated: 2018/06/13 22:47:48 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void   ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst_next;

	if (alst != NULL)
	{
		while (*alst != NULL)
		{
			lst_next = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = lst_next;
		}
	}	
}
