/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 00:37:04 by robert0           #+#    #+#             */
/*   Updated: 2018/06/20 21:20:57 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

static void	ft_print_separator(void)
{
	ft_putendl("============================");
}

static void	ft_print_addr(char *ptr_addr)
{
	ft_putstr("0x");
	ft_putstr(ft_sttoa_base((size_t)(ptr_addr), "0123456789abcdef"));
}

static void	ft_print_ivalue(char *ptr_addr)
{
	ft_putstr(ft_itoa((int)(*ptr_addr)));
}

static void	ft_printline_values(char *ptr_addr)
{
	ft_print_addr(ptr_addr);
	ft_putchar('\t');
	ft_print_ivalue(ptr_addr);
	ft_putchar('\t');
	ft_putchar(*ptr_addr);
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, size_t size)
{
	char	*ptr_addr;

	if (addr != NULL)
	{
		ptr_addr = (char *)(addr);
		ft_print_separator();
		while (size-- != 0)
		{
			ft_printline_values(ptr_addr);
			ptr_addr++;
		}

		ft_print_separator();
	}

	return (addr);
}
