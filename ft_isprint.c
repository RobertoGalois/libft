/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:52:22 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 10:49:01 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_isprint(int c)
{
	int		ret;

	ret = 0;
	if ((c >= 32) && (c <= 126))
		ret = 1;

	return (ret);
}