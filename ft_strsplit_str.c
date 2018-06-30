/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 17:59:31 by robert0           #+#    #+#             */
/*   Updated: 2018/06/12 23:08:06 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static size_t	ft_get_len_word(char const *s, char const *str_sep)
{
	size_t  ret;
	size_t	len_sep;

	ret = 0;
	len_sep = ft_strlen(str_sep);
	while ((*s != '\0') && (ft_strncmp(s, str_sep, len_sep) != 0))
	{   
		ret++;
		s++;
	}   

	return (ret);
}

static char	**ft_empty_string_arr(char const *s)
{
	char	**ret;

	ret = (char **)(ft_memalloc(2 * sizeof (char *)));
	if (ret != NULL)
		ret[0] = (char *)(s);

	return (ret);
}

static char	**ft_full_string_arr(size_t nb_words, char **ret, char const *s, char const *s_sep)
{
	size_t	count;
	size_t	len_sep;
	size_t	buf_len_word;

	count = 0;
	len_sep = ft_strlen(s_sep);

	while (nb_words != 0)
	{
		while (ft_strncmp(s, s_sep, len_sep) == 0)
			s += len_sep;

		buf_len_word = ft_get_len_word(s, s_sep);
		ret[count] = ft_strndup(s, buf_len_word);
		s += buf_len_word;
		count++;
		nb_words--;
	}

	ret[count] = NULL;
	return (ret);
}

char	**ft_strsplit_str(char const *s, char const *str_sep)
{
	char	**ret;
	size_t	nb_words;

	ret = NULL;
	if ((s != NULL) && (str_sep != NULL))
	{
		if ((*s == '\0') || (*str_sep == '\0'))
			ret = ft_empty_string_arr(s);

		else
		{
			nb_words = ft_str_getnbwords_str(s, str_sep);

			ret = (char **)(ft_memalloc((nb_words + 1) * sizeof (char *)));
			if (ret != NULL)
				ret = ft_full_string_arr(nb_words, ret, s, str_sep);
		}
	}

	return (ret);
}
