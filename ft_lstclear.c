/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 13:42:45 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 14:24:02 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *counter;
	t_list *addr_next;

	counter = *lst;
	if (lst != NULL)
	{
		while (counter)
		{	
			addr_next = counter->next;
			del(counter->content);
			free(counter);
			counter = addr_next;
		}
		*lst = NULL;
	}
}
