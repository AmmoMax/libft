/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:16:41 by amayor            #+#    #+#             */
/*   Updated: 2020/09/02 22:54:39 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ERROR 1
#define OK 0

int			ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (!lst)
		return (ERROR);
	if (!new)
		return (ERROR);
	start = *lst;
	if (start)
	{
		while (start->next)
			start = start->next;
		start->next = new;
		new->next = NULL;
		return (OK);
	}
	else
		*lst = new;
	return (OK);
}
