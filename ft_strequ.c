/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:57:47 by robert0           #+#    #+#             */
/*   Updated: 2018/06/09 16:56:37 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strequ(char const *s1, char const *s2)
{
	int		ret;

	ret = 1;
	while ((*s1 != '\0') && (*s2 != '\0') && (ret == 1))
	{
		if (*s1 != *s2)
			ret = 0;

		s1++;
		s2++;
	}

	if ((*s1 != *s2) && (ret == 1))
		ret = 0;

	return (ret);
}
