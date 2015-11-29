/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:43:00 by acazuc            #+#    #+#             */
/*   Updated: 2015/11/26 06:58:43 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch == c && ch >= 'A' && ch <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}