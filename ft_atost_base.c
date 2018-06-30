/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atost_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 11:32:30 by robert0           #+#    #+#             */
/*   Updated: 2018/06/27 23:06:44 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

/*
** return 0 if there is a problem, 1 else
*/
static int	ft_checkbase(const char *p_base)
{
	size_t	count1;
	size_t	count2;

	/* if the base is empty or size 1  */
	if ((p_base[0] == '\0') || (p_base[1] == '\0'))
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

/*
** return 0 if there is a probleme, 1 else
*/
static int	ft_checkstr(const char *str, const char *base)
{
	size_t	count1;
	size_t	count2;
	int		bool_error;

	bool_error = 1;
	count1 = 0;

	/* if str is empty */
	if (str[0] == '\0')
		return (0);

	/* if the first char is + or -, dont treat it  */
	if ((str[0] == '+') || (str[0] == '-'))
		count1++;

	/* check if each char is in the base */
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (base[count2] != '\0')
		{
			if (str[count1] == base[count2++])
				bool_error = 0;
		}

		if (bool_error == 1)
			return (0);

		bool_error = 1;
		count1++;
	}

	return (1);
}

/*
** get the char* number and its base and return the same value with numbers
** indx is the index of str that we consider that it is the number
** it is used to avoid to treat the '-' or '+' sign
** without modify *str
*/
static size_t	ft_chars_to_digits(const char *str, const char *base, int indx)
{
	size_t	ret_nb;
	size_t	count;

	ret_nb = 0;
	while (str[indx] != '\0')
	{
		count = 0;
		while (base[count] != '\0')
		{
			if (str[indx] == base[count])
			{
				ret_nb *= 10;
				ret_nb += count;
				break ;
			}

			count++;
		}

		indx++;
	}

	return (ret_nb);
}
static size_t	ft_recurs_power(size_t nb, size_t power)
{
	if (power == 0)
		return (1);

	else
		return (nb * ft_recurs_power(nb, (power - 1)));
}

size_t	ft_atost_base(const char *str, const char *base)
{
	size_t	count;
	size_t	nb;
	size_t	nbr_final;
	size_t	size_base;

	count = 0;
	nbr_final = 0;
	size_base = 0;

	if (ft_checkbase(base) && ft_checkstr(str, base))
	{
		/* get the begining of the number  */
		while (str[count] == ' ' || str[count] == '+')
			count++;

		/* we get the number in the same base but with digits */
		nb = ft_chars_to_digits(str, base, count);

		/*
		** we get the length of the base, here size_base is > 1
		*/
		while (base[++size_base] != '\0');

		count = 0;
		nb *= 10;
		while ((nb /= 10) > 0)
			nbr_final += (nb % 10) * ft_recurs_power(size_base, count++);
	}

	return (nbr_final);
}
