/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:16:41 by amayor            #+#    #+#             */
/*   Updated: 2020/09/02 20:48:29 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *start;

	if (!lst)
		return ;
	start = *lst;
	if (start)
	{
		while (start->next)
			start = start->next;
		start->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
}
