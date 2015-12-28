/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:11:16 by acazuc            #+#    #+#             */
/*   Updated: 2015/11/26 06:45:58 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*item;
	t_list	*next;

	item = *alst;
	while (item)
	{
		del(item->content, item->content_size);
		next = item->next;
		free(item);
		item = next;
	}
	*alst = NULL;
}
