/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:36:26 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:41:12 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char   *ft_strdup(const char *s)
{
	size_t	len_s;
	char	*ret;
	size_t	count;

	ret = NULL;
	len_s = ft_strlen(s);
	ret = ft_strnew(len_s);
	if (ret != NULL)
	{
		count = 0;
		while (s[count] != '\0')
		{
			ret[count] = s[count];
			count++;
		}
	}

	return (ret);
}
