/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_el.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robert0 <fripponsupersonique@42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:40:08 by robert0           #+#    #+#             */
/*   Updated: 2018/06/24 22:43:22 by robert0          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<>

void	ft_lstdel_el(void *content, size_t size_content)
{
	ft_memdel(content);
	size_content++;
}
