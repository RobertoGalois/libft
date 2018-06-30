/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:00:31 by robert0           #+#    #+#             */
/*   Updated: 2018/06/10 18:48:07 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static int	ft_issep(char c, char c_sep)
{
	if (c == c_sep)
		return (1);

	return (0);
}

char   *ft_strtrim_c(char const *s, char c_sep)
{
	char	*ret;
	size_t	indx_start;
	size_t	indx_end;

	ret = NULL;
	if (s != NULL)
	{
		indx_start = 0;
		indx_end = ft_strlen(s) - 1;
		while (ft_issep(s[indx_start], c_sep))
			indx_start++;

		if (s[indx_start] == '\0')
			ret = ft_strdup("");

		else
		{
			while ((ft_issep(s[indx_end], c_sep)) && (indx_end != 0))
				indx_end--;

			ret = ft_strsub(s, indx_start, (indx_end - indx_start + 1));
		}
	}

	return (ret);
}
