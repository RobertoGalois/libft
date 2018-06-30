/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:05:06 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 14:56:10 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void   ft_putnbr_fd(int n, int fd)
{
	size_t	magnitude;

	if (n == 0)
		ft_putchar('0');

	else
	{
		magnitude = 1;
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}

		while ((n / magnitude) != 0)
			magnitude *= 10;

		magnitude /= 10;
		while (magnitude != 0)
		{
			ft_putchar_fd(((char)(n / magnitude) + 48), fd);
			n = (n % magnitude);
			magnitude /= 10;
		}
	}
}
