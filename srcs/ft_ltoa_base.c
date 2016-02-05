/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 11:20:57 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/05 11:24:21 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(long long int n, char *base)
{
	size_t	size;

	size = n < 0 ? 2 : 1;
	n = n < 0 ? -n : n;
	while (n > 0)
	{
		size++;
		n /= ft_strlen(base);
	}
	return (size);
}

char			*ft_ltoa_base(long long int n, char *base)
{
	char	*result;
	size_t	size;
	size_t	j;
	size_t	i;
	size_t	nb;

	if (!base || ft_strlen(base) < 2)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	nb = n < 0 ? -n : n;
	size = get_size(n, base);
	if (!(result = malloc(sizeof(result) * size)))
		return (result);
	if (n < 0)
		result[0] = '-';
	j = 1;
	i = 1;
	while (nb / j > 0)
	{
		result[size - i++ - 1] = base[(nb / j) % ft_strlen(base)];
		j = j * 10;
	}
	result[size - 1] = '\0';
	return (result);
}
