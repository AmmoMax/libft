/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 13:42:45 by amayor            #+#    #+#             */
/*   Updated: 2020/05/26 21:18:44 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*counter;
	t_list	*addr_next;

	counter = *lst;
	if (lst != NULL)
	{
		while (counter)
		{
			addr_next = counter->next;
			del(counter->content);
			counter->next = NULL;
			free(counter);
			counter = addr_next;
		}
		*lst = NULL;
	}
}
