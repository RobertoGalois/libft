/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:00:31 by robert0           #+#    #+#             */
/*   Updated: 2018/06/23 09:54:32 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

void	ft_init_params(size_t *indx_start, size_t *indx_end, size_t *len_sep,
						char const *s_sep, char const *s)
{
	*indx_start = 0;
	*indx_end = ft_strlen(s) - 1;
	*len_sep = ft_strlen(s_sep);	
}

char   *ft_strtrim_str(char const *s, char const *s_sep)
{
	char	*ret;
	size_t	indx_start;
	size_t	indx_end;
	size_t	len_sep;

	ret = NULL;
	if ((s != NULL) && (s_sep != NULL))
	{
		ft_init_params(&indx_start, &indx_end, &len_sep, s_sep, s);
		while (ft_strncmp((s + indx_start), s_sep, len_sep) == 0)
			indx_start += len_sep;

		if (s[indx_start] == '\0')
			ret = ft_strdup("");

		else
		{
			while (ft_strncmp((s + indx_end - len_sep + 1), s_sep, len_sep) == 0)
				indx_end -= len_sep;

			ret = ft_strsub(s, indx_start, (indx_end - indx_start + 1));
		}
	}

	return (ret);
}
