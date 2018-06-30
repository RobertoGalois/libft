/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:51:09 by robert0           #+#    #+#             */
/*   Updated: 2018/06/21 07:11:35 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalpha(int c)
{
	int		ret;

	ret = 0;
	if (ft_isalpha_upper(c) || ft_isalpha_lower(c))
		ret = 1;

	return (ret);
}
