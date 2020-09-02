/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:46:40 by amayor            #+#    #+#             */
/*   Updated: 2020/09/01 22:21:03 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*begin;

	begin = lst;
	len = 0;
	if (lst == NULL)
		return (0);
	while (begin)
	{
		len++;
		begin = begin->next;
	}
	return (len);
}
