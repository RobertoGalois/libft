/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 21:41:05 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 21:47:02 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

char	*ft_strtolower(char *str)
{
	char	*ptr_str;

	if (str != NULL)
	{
		ptr_str = str;
		while (*ptr_str != '\0')
		{
			*ptr_str = ft_tolower(*ptr_str);
			ptr_str++;
		}
	}

	return (str);
}
