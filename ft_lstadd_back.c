/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:16:41 by amayor            #+#    #+#             */
/*   Updated: 2020/05/22 23:03:56 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list **start;

	start = lst;
	if (*lst)
	{
		while ((*start)->next)
		{
			start++;
		}
		(*start)->next = new;
		new->next = NULL;
	}
	else
		*lst = new;	
}
