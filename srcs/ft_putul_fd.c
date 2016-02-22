/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putul_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:30:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/22 10:30:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putul_fd(size_t n, int fd)
{
	if (n > 9)
	{
		ft_putul_fd(n / 10, fd);
		ft_putul_fd(n % 10, fd);
	}
	else
		ft_putul_fd('0' + n, fd);
}
