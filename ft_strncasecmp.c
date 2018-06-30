/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 22:03:33 by robert0           #+#    #+#             */
/*   Updated: 2018/06/29 01:07:44 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

/*
** Because it returns an int value that reprensent the difference between
** the 2 strinfs, I prefer not to test if params are NULL to let 
** segfault if the function is not used properly
*/
int  ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (ft_toupper(*s1) != ft_toupper(*s2))
		{
			if ((*((unsigned char *)(s1))) < (*((unsigned char *)(s2))))
				return (-1);
			else
				return (1);
		}

		else if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
		n--;
	}

	return (0);
}

