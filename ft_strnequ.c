/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:58:11 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 17:19:59 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

int    ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		ret;

	ret = 1;
	while ((*s1 != '\0') && (*s2 != '\0') && (ret == 1) && (n != 0))
	{
		if (*s1 != *s2)
			ret = 0;

		s1++;
		s2++;
		n--;
	}

	if ((*s1 != *s2) && (ret == 1) && (n != 0))
		ret = 0;

	return (ret);
}