/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:24:13 by robert0           #+#    #+#             */
/*   Updated: 2018/06/19 18:53:25 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<string.h>
#include	"libft.h"

size_t	ft_numberlen(int nbr, size_t size_base)
{
	size_t	ret;

	if (size_base < 2)
		return (0);

	if (nbr == 0)
		return (1);

	ret = 1;
	if (nbr < 0)
	{
		ret++;
		nbr = -nbr;
	}

	while (nbr != 0)
	{
		nbr /= size_base;
		ret++;
	}

	return (ret - 1);
}
