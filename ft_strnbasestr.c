/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnbasestr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:49:41 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 23:40:38 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"


static size_t	ft_retmin(size_t a, size_t b)
{
	if (a < b)
		return (a);

	return (b);
}

static int	ft_continue_parsing(char const *haystack,
								size_t len_needle,
								size_t count, size_t len,
								char const *ret)
{
	int		ret_bool;

	ret_bool = 1;
	if (!((len_needle + count) <= len))
		ret_bool = 0;

	if (!((*(haystack + len_needle - 1)) != '\0'))
		ret_bool = 0;

	if (!(ret == NULL))
		ret_bool = 0;

	if (!(count < len))
		ret_bool = 0;

	return (ret_bool);
}

char   *ft_strnbasestr(const char *haystack, const char *needle, size_t len,
						int (*ft_ncmp)(const char *, const char *, size_t))
{
	const char	*ret;
	size_t		len_haystack;
	size_t		len_needle;
	size_t		count;

	ret = NULL;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	count = 0;
	if (len_needle == 0)
		ret = haystack;

	else if (len_needle <= ft_retmin(len_haystack, len))
	{
		while (ft_continue_parsing(haystack, len_needle, count, len, ret))
		{
			if ((*ft_ncmp)(haystack, needle, len_needle) == 0)
				ret = haystack;

			haystack++;
			count++;
		}
	}

	return ((char *)(ret));
}
