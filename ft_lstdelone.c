/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:06:09 by robert0           #+#    #+#             */
/*   Updated: 2018/06/13 18:40:50 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void   ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst != NULL)
		(*del)((*alst)->content, (*alst)->content_size);

	ft_memdel((void **)(alst));
}

