/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:59:06 by robert0           #+#    #+#             */
/*   Updated: 2018/06/23 09:43:01 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	count;

	ret = NULL;
	if ((s != NULL) && (len != 0))
	{
		ret = ft_strnew(len);
		count = 0;
		if (ret != NULL)
		{
			while ((s[start + count] != '\0') && (len != 0))
			{
				ret[count] = s[start + count];
				count++;
				len--;
			}
		}
	}

	return (ret);
}
