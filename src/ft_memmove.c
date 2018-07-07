/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:41:53 by acazuc            #+#    #+#             */
/*   Updated: 2018/07/07 19:14:59 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!len)
		return (dst);
	if (dst < src)
	{
		i = -1;
		while (++i < len)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	}
	else
	{
		i = len + 1;
		while (--i > 0)
			((unsigned char*)dst)[i - 1] = ((unsigned char*)src)[i - 1];
	}
	return (dst);
}
