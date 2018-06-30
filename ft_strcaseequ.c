/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaseequ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:57:47 by robert0           #+#    #+#             */
/*   Updated: 2018/06/21 22:23:03 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int    ft_strcaseequ(char const *s1, char const *s2)
{
	int		ret;

	ret = 1;
	while ((*s1 != '\0') && (*s2 != '\0') && (ret == 1))
	{
		if (ft_toupper(*s1) != ft_toupper(*s2))
			ret = 0;

		s1++;
		s2++;
	}

	if ((ft_toupper(*s1) != ft_toupper(*s2)) && (ret == 1))
		ret = 0;

	return (ret);
}
