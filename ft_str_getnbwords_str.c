/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_getnbwords_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 20:30:28 by robert0           #+#    #+#             */
/*   Updated: 2018/06/12 21:38:18 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

size_t	ft_str_getnbwords_str(char const *s, char const *s_sep)
{
	size_t	ret;
	size_t	len_sep;
	char	*s_trimed;

	ret = 0;
	len_sep = ft_strlen(s_sep);
	if ((s != NULL) && (s_sep != NULL) && (s[0] != '\0'))
	{
		ret = 1;
		s_trimed = ft_strtrim_str(s, s_sep);
		while ((s_trimed = ft_strstr(s_trimed, s_sep)) != NULL)
		{
			if (ft_strncmp((s_trimed + len_sep), s_sep, len_sep) != 0)
				ret++;

			s_trimed += len_sep;
		}
	}

	return (ret);
}
