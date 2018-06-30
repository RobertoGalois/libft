/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:06:55 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 10:31:14 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void   ft_lstadd(t_list **alst, t_list *new)
{
	if ((alst != NULL) && (new != NULL))
	{
		new->next = *alst;
		*alst = new;
	}
}
