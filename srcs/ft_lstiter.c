/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 14:38:31 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 22:02:32 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr_addr;

	if (lst != NULL)
	{
		curr_addr = lst;
		while (curr_addr)
		{
			f(curr_addr->content);
			curr_addr = curr_addr->next;
		}
	}
}
