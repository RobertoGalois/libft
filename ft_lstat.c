/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 07:26:15 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 07:29:11 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

t_list	*ft_lstat(t_list *list, size_t index)
{
	t_list	*ret;
	size_t	count;

	ret = NULL;
	count = 0;
	while ((list != NULL) && (count < index))
	{
		list = list->next;
		count++;
	}

	return (ret);
}
