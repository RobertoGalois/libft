/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:51:09 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 11:18:56 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha_lower(int c)
{
	int		ret;

	ret = 0;
	if ((c >= (int)('a')) && (c <= (int)('z')))
		ret = 1;

	return (ret);
}
