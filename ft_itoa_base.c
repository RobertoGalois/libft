/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:24:13 by robert0           #+#    #+#             */
/*   Updated: 2018/06/19 19:04:26 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<string.h>
#include	"libft.h"

/*
** return the lenght of the string that contain at least 1 char
** supposed to be used with a string that contain at least 2 chars..
*/
static size_t	ft_baselen(char *p_string)
{
	int		count;

	count = 0;
	while (p_string[++count] != '\0');
	return (count);
}

void	ft_set_0_str(char *str, char c_zero)
{
	str[0] = c_zero;
	str[1] = '\0';
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*ret;
	size_t	count;
	int		ispos;
	size_t	size_base;		/* nb of chars in the base except \0 */
	size_t	size_nbr;		/* number of digits (and -) in the nbr */

	ret = NULL;
	ispos = 1;
	if (ft_check_base(base))
	{
		size_base = ft_baselen(base);
		size_nbr = ft_numberlen(nbr, size_base);
		ret = (char *)(ft_memalloc((size_nbr + 1) * sizeof (char)));
		if (ret == NULL)
			return (NULL);

		if (nbr == 0)
			ft_set_0_str(ret, base[0]);

		else
		{
			count = 0;
			if (nbr < 0)
			{
				ret[0] = '-';
				ispos = 0;
				nbr = -nbr;
				count++;
			}

			while (nbr != 0)
			{
				ret[size_nbr - count - ispos] = base[(nbr % size_base)];
				nbr /= size_base;
				count++;
			}

			ret[count] = '\0';
		}
	}

	return (ret);
}
