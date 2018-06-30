/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:49:11 by robert0           #+#    #+#             */
/*   Updated: 2018/06/27 22:58:37 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strstr(const char *haystack, const char *needle)
{
	const char	*ret;

	ret = ft_strbasestr(haystack, needle, ft_strncmp);
	return ((char *)(ret));

}
