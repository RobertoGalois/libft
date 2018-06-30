/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:56:58 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 16:46:10 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	size_t	indx;

	ret = NULL;
	indx = 0;
	if ((s != NULL) && (f != NULL))
	{
		ret = ft_strdup(s);
		if (ret != NULL)
		{
			while (ret[indx] != '\0')
			{
				ret[indx] = (*f)(ret[indx]);
				indx++;
			}
		}
	}

	return (ret);
}
