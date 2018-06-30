/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:44:43 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:46:12 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

char   *ft_strcat(char *dest, const char *src)
{
	char	*ptr_dest;

	ptr_dest = dest;
	while (*ptr_dest != '\0')
		ptr_dest++;

	while (*src != '\0')
		*ptr_dest++ = *src++;

	*ptr_dest = '\0';
	return (dest);
}
