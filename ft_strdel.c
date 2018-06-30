/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:55:13 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 22:38:24 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void   ft_strdel(char **as)
{
	/*
	** ft_memdel already checks if as and *as != NULL
	*/
	ft_memdel((void **)(as));
}
