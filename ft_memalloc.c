/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:53:24 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 20:17:11 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<string.h>
#include	"libft.h"

void   *ft_memalloc(size_t size)
{
	void	*ret;

	if (size == 0)
		return (NULL);

	ret = malloc(size);
	if (ret != NULL)
		ft_bzero(ret, size);

	return (ret);
}
