/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:50:43 by robert0           #+#    #+#             */
/*   Updated: 2018/06/18 18:18:40 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_isspace(char c)
{
	int		ret;

	ret = 0;
	if ((c == '\a')
		|| (c == '\b')
		|| (c == '\f')
		|| (c == '\n')
		|| (c == '\r')
		|| (c == '\t')
		|| (c == '\v'))
	{
		ret = 1;
	}

	return (ret);
}

long    ft_atol(const char *nptr)
{
	long	ret_value;
	long	sign_value;

	ret_value = 0;
	sign_value = 1;
	while (ft_isspace(*nptr))
		nptr++;

	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign_value = -1;

		nptr++;
	}

	while (ft_isdigit(*nptr))
	{
		ret_value *= 10;
		ret_value += *nptr - 48;
		nptr++;
	}

	return (sign_value * ret_value);
}
