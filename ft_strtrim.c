/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:00:31 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 18:26:01 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);

	return (0);
}

char   *ft_strtrim(char const *s)
{
	char	*ret;
	size_t	indx_start;
	size_t	indx_end;

	ret = NULL;
	if (s != NULL)
	{
		indx_start = 0;
		indx_end = ft_strlen(s) - 1;
		while (ft_isspace(s[indx_start]))
			indx_start++;

		if (s[indx_start] == '\0')
			ret = ft_strdup("");

		else
		{
			while ((ft_isspace(s[indx_end])) && (indx_end != 0))
				indx_end--;

			ret = ft_strsub(s, indx_start, (indx_end - indx_start + 1));
		}
	}

	return (ret);
}
