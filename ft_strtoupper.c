/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 21:38:51 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 21:44:53 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtoupper(char *str)
{
	char	*ptr_str;

	if (str != NULL)
	{
		
		ptr_str = str;
		while (*ptr_str != '\0')
		{
			*ptr_str = ft_toupper(*ptr_str);
			ptr_str++;
		}
	}

	return (str);
}
