/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:48:37 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 21:50:49 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char   *ft_strrchr(const char *s, int c)
{
	char	char_c;
	size_t	count;
	char	*ret;

	ret = NULL;
	if (*s != '\0')
	{
		char_c = (char)(c);
		count = ft_strlen(s) + 1;
		while ((ret == NULL) && (count != 0))
		{
			if (s[count - 1] == char_c)
				ret = (char *)(s + count - 1);

			count--;
		}
	}

	return (ret);
}
