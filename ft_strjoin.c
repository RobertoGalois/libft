/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:00:08 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 17:59:45 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	ret = NULL;
	if ((s1 != NULL) && (s2 != NULL))
	{
		ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (ret != NULL)
		{
			ft_strcpy(ret, s1);
			ft_strcpy((ret + ft_strlen(s1)), s2);
		}
	}	

	return (ret);
}
