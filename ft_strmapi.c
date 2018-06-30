/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:57:28 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 16:46:38 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char    *ret;
	size_t  indx;

	ret = NULL;
	indx = 0;
	if ((s != NULL) && (f != NULL))
	{   
		ret = ft_strdup(s);
		if (ret != NULL)
		{
			while (ret[indx] != '\0')
			{
				ret[indx] = (*f)(indx, ret[indx]);
				indx++;
			}
		}
	}   

	return (ret);

}
