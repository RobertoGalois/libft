/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:13:22 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 21:07:36 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static char const	*ft_concat(char *dest, char const *src, size_t n)
{
	while (*src != '\0')
	{
		if (n != 1)
		{
			*dest++ = *src;
			n--;
		}

		src++;
	}

	*dest = '\0';
	return (src);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr_dest;
	char const	*ptr_src;
	size_t		n;
	size_t		dest_len;

	ptr_dest = dst;
	ptr_src = src;
	n = size;
	while ((n-- != 0) && (*ptr_dest != '\0'))
		ptr_dest++;

	dest_len = (size_t)(ptr_dest - dst);
	n = (size - dest_len);

	/*
	** if (size < len(dest))
	*/
	if (n == 0)
		return(dest_len + ft_strlen(ptr_src));

	ptr_src = ft_concat(ptr_dest, ptr_src, n);
	return(dest_len + (size_t)(ptr_src - src));
}
