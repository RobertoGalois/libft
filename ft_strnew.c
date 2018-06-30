/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:54:41 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 23:36:19 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	<stdlib.h>
#include	"libft.h"

char   *ft_strnew(size_t size)
{
	char	*ret;

	ret = (char *)(ft_memalloc((size + 1) * sizeof (char)));
	if (ret != NULL)
		ft_bzero(ret, size + 1);

	return (ret);
}
