/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sttoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:01:21 by robert0           #+#    #+#             */
/*   Updated: 2018/06/15 11:22:22 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

/*
** Takes an int end return the number of chars needed to write it
*/
static size_t	ft_digitlen(size_t n)
{
	size_t	len_ret;

	len_ret = 0;
	if (n == 0)
		len_ret = 1;

	while (n != 0)
	{
		n /= 10;
		len_ret++;
	}

	return (len_ret);
}

/*
** Takes an exposant n and return 10^n
*/
static size_t	ft_tenpow(size_t n)
{
	size_t	ret;

	ret = 1;
	while (n != 0)
	{
		ret *= 10;
		n--;
	}

	return (ret);
}

char   *ft_sttoa(size_t n)
{
	char	*ret;
	size_t	digit_len;
	size_t	indx;
	size_t	magnitude;

	digit_len = ft_digitlen(n);
	ret = ft_strnew(digit_len);
	indx = 0;
	magnitude = 0;
	if (ret != NULL)
	{
		while (digit_len != 0)
		{
			digit_len--;
			magnitude = ft_tenpow(digit_len);
			ret[indx] = ((char)((int)(n / magnitude))) + 48;
			n = n % magnitude;
			indx++;
		}
	}
	
	return (ret);
}
