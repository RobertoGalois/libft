/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:47:26 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:48:26 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strchr(const char *s, int c)
{
	char	char_c;
	size_t	count;
	size_t	lim;
	char	*ret;

	ret = NULL;
	char_c = (char)(c);
	count = 0;
	lim = ft_strlen(s);
	while ((ret == NULL) && (count <= lim))
	{
		if (s[count] == char_c)
			ret = (char *)(s + count);

		count++;
	}

	return (ret);
}
