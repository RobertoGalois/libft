/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:55:06 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 20:10:10 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)(dest);
	ptr_src = (char *)(src);
	while (n != 0)
	{
		*(ptr_dest++) = *(ptr_src++);
		n--;
	}

	return (dest);
}
