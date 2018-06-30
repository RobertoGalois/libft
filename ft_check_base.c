/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:24:13 by robert0           #+#    #+#             */
/*   Updated: 2018/06/19 18:45:17 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<string.h>
#include	"libft.h"

/*
** return 0 if there is a problem, 1 else
*/
int		ft_check_base(char *p_base)
{
	int		count1;
	int		count2;

	/* if the base is empty or size 1  */
	if ((p_base == NULL) || (p_base[0] == '\0') || (p_base[1] == '\0'))
		return (0);

	count1 = 0;
	while (p_base[count1] != '\0')
	{
		/* if the base contain '-' or '+' */
		if ((p_base[count1] == '-') || (p_base[count1] == '+'))
			return (0);

		/* check if all chars are distincts */
		count2 = count1;
		while (p_base[++count2] != '\0')
		{
			if (p_base[count1] == p_base[count2])
				return (0);
		}

		count1++;
	}

	return (1);
}
