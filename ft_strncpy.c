/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:42:29 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:45:34 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	count;

	count = 0;
	ft_bzero(dest, n);
	while ((count < n) && (src[count] != '\0'))
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
