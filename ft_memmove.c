/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 19:00:52 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:38:18 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = (char *)(ft_memalloc(n));
	if (temp != NULL)
	{
		ft_memcpy(temp, src, n);
		ft_memcpy(dest, temp, n);
		ft_memdel((void **)(&temp));
	}

	return (dest);
}
