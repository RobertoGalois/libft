/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 07:02:48 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 07:13:56 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

size_t	ft_lstsize(t_list *list)
{
	size_t	ret;

	ret = 0;
	while (list != NULL)
	{
		ret++;
		list = list->next;
	}

	return (ret);
}
