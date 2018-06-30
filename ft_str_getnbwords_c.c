/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_getnbwords_c.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 20:23:21 by robert0           #+#    #+#             */
/*   Updated: 2018/06/12 17:25:13 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

size_t	ft_str_getnbwords_c(const char *s, char c_sep)
{
	size_t	ret;
	int		bool_in_word;

	ret = 0;
	bool_in_word = 0;
	while (*s != '\0')
	{   
		if ((bool_in_word == 0) && (*s != c_sep))
		{
			bool_in_word = 1;
			ret++;
		}

		else if ((bool_in_word == 1) && (*s == c_sep))
			bool_in_word = 0;

		s++;
	}   

	return (ret);
}
