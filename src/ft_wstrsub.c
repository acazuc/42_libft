/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:17:16 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/05 15:59:12 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wstrsub(wchar_t const *s, unsigned int start, size_t len)
{
	wchar_t	*result;
	size_t	i;

	result = malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (result);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[len] = L'\0';
	return (result);
}
