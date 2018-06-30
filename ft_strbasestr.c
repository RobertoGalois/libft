/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:49:11 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 23:44:48 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strbasestr(const char *haystack, const char *needle,
						int (*ft_ncmp)(const char *, const char *, size_t))
{
	const char	*ret;
	size_t		len_haystack;
	size_t		len_needle;

	ret = NULL;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		ret = haystack;

	else if (len_needle <= len_haystack)
	{
		while ((*(haystack + len_needle - 1) != '\0') && (ret == NULL))
		{
			if ((*ft_ncmp)(haystack, needle, len_needle) == 0)
				ret = haystack;
 
			haystack++;
		}
	}

	return ((char *)(ret));

	/*
	** OTHER WAY TO DO :
	** ---------------
	** char	*ret;
	**
	** ret = ft_strnbasestr(haystack, needle, ft_strlen(haystack), ft_ncmp);
	** return (ret);
	*/
	
}
