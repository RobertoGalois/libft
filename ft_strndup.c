/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:36:26 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 00:04:20 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

static	size_t	ft_get_smaller(size_t a, size_t b)
{
	if (a < b)
		return (a);

	return (b);
}

char   *ft_strndup(const char *s, size_t size)
{
	size_t	len_s;
	char	*ret;
	size_t	count;

	ret = NULL;
	len_s = ft_strlen(s);
	ret = ft_strnew(ft_get_smaller(len_s, size));
	if (ret != NULL)
	{
		count = 0;
		while ((s[count] != '\0') && (size != 0))
		{
			ret[count] = s[count];
			count++;
			size--;
		}
	}

	return (ret);
}
