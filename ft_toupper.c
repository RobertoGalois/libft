/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:52:44 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 09:59:58 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

#include	<stdio.h>
#include	<ctype.h>

int    ft_toupper(int c)
{
	int		ret;

	ret = c;
	if (ft_isalpha_lower(c))
		ret = c - 32;

	return (ret);
}
