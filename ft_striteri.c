/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:56:22 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 16:09:36 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

void   ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	indx;

	if ((s != NULL) && (f != NULL))
	{
		indx = 0;
		while (s[indx] != '\0')
		{
			(*f)(indx, &(s[indx]));
			indx++;
		}
	}
}
