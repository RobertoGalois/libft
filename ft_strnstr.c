/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:49:41 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 22:44:46 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char   *ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ret;

	ret = ft_strnbasestr(big, little, len, &ft_strncmp);
	return ((char *)(ret));
}
