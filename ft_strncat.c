/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:45:09 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:47:38 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ptr_dest;

	ptr_dest = dest + ft_strlen(dest);
	while ((*src != '\0') && (n != 0))
	{
		*ptr_dest = *src;
		ptr_dest++;
		src++;
		n--;
	}

	*ptr_dest = '\0';
	return (dest);
}
