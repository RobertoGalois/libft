/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 06:40:34 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 10:56:41 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*ptr_list;

	if ((alst != NULL) && (new != NULL))
	{
		if (*alst != NULL)
		{
			ptr_list = *alst;
			while (ptr_list->next != NULL)
				ptr_list = ptr_list->next;

			ptr_list->next = new;
		}

		else
			ft_lstadd(alst, new);
	}
}
