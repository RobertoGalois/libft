/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:01:21 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 15:12:43 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

/*
** Takes an int end return the number of chars needed to write it
*/
static size_t	ft_digitlen(int	n)
{
	size_t		len_ret;

	len_ret = 0;
	if (n == 0)
		len_ret = 1;

	else if (n < 0)
	{
		len_ret += 1;
		n *= (-1);
	}

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
static int	ft_tenpow(int n)
{
	int	ret;

	ret = 1;
	if (n < 0)
		n = -n;

	while (n != 0)
	{
		ret *= 10;
		n--;
	}

	return (ret);
}

static int	ft_sign_manage(char *ret, int n, size_t *digit_len, size_t *indx)
{
	if (n < 0)
	{
		ret[*indx] = '-';
		(*indx)++;
		n = -n;
		(*digit_len)--;
	}

	return (n);
}

char   *ft_itoa(int n)
{
	char	*ret;
	size_t	digit_len;
	size_t	indx;
	int		magnitude;

	digit_len = ft_digitlen(n);
	ret = ft_strnew(digit_len);
	indx = 0;
	magnitude = 0;
	if (ret != NULL)
	{
		n = ft_sign_manage(ret, n, &digit_len, &indx);
		while (digit_len != 0)
		{
			digit_len--;
			magnitude = ft_tenpow(digit_len);
			ret[indx] = ((char)((int)(n / magnitude))) + 48;
			n %= magnitude;
			indx++;
		}
	}
	
	return (ret);
}
