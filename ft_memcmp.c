/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:34:01 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 21:15:31 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (n == 0)
		return (0);

	ptr_s1 = (unsigned char *)(s1);
	ptr_s2 = (unsigned char *)(s2);
	while ((*ptr_s1 == *ptr_s2) && (n != 1))
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}

	return (*ptr_s1 - *ptr_s2);
}
