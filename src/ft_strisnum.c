/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:15:37 by acazuc            #+#    #+#             */
/*   Updated: 2018/08/08 20:18:31 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnum(char *s)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	while (i < len)
	{
		if (!ft_isnum(s[i]))
			return (0);
		++i;
	}
	return (1);
}
