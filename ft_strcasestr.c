/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 14:23:32 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 22:32:47 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strcasestr(const char *haystack, const char *needle)
{
	const char	*ret;

	ret = ft_strbasestr(haystack, needle, &ft_strncasecmp);
	return ((char *)(ret));
}
