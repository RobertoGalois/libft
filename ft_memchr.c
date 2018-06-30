/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:33:20 by robert0           #+#    #+#             */
/*   Updated: 2018/06/28 19:40:07 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

void   *ft_memchr(const void *s, int c, size_t n)
{
	void			*ret;
	unsigned char	*ptr_s;
	unsigned char	char_c;

	ret = NULL;
	ptr_s = (unsigned char *)(s);
	char_c = (unsigned char)(c);
	while ((n != 0) && (ret == NULL))
	{
		if (*ptr_s == char_c)
			ret = (void *)(ptr_s);

		ptr_s++;
		n--;
	}

	return (ret);
}
