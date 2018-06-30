/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 22:04:06 by robert0           #+#    #+#             */
/*   Updated: 2018/06/30 10:37:05 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void   ft_putchar_fd(char c, int fd)
{
	unsigned char uc;

	uc = (unsigned char)(c);
	write(fd, &uc, 1);
}
