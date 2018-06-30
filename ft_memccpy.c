/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:56:39 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 20:34:47 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;
	char	lim;
	void	*ret;

	ret = NULL;
	ptr_dest = (char *)(dest);
	ptr_src = (char *)(src);
	lim = (char)(c);

	while ((n != 0) && (ret == NULL))
	{
		*ptr_dest = *ptr_src;
		if (*ptr_src == lim)
			ret =  ((void *)(ptr_dest + 1));

		ptr_dest++;
		ptr_src++;
		n--;
	}

	return (ret);
}
