/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:50:04 by robert0           #+#    #+#             */
/*   Updated: 2018/06/29 00:50:11 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int    ft_strcasecmp(const char *s1, const char *s2)
{
	while (ft_toupper(*s1) == ft_toupper(*s2))
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	if ((*((unsigned char *)(s1))) < (*((unsigned char *)(s2))))
		return (-1);

	else
		return (1);
}
