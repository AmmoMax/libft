/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:11:09 by amayor            #+#    #+#             */
/*   Updated: 2020/05/26 20:58:40 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cp_lst;
	t_list	*res_counter;

	if (lst == NULL)
		return (NULL);
	cp_lst = lst;
	result = ft_lstnew(f(lst->content));
	if (result == NULL)
		return (NULL);
	cp_lst = cp_lst->next;
	res_counter = result;
	while (cp_lst)
	{
		res_counter->next = ft_lstnew(f(cp_lst->content));
		if (res_counter->next == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		cp_lst = cp_lst->next;
		res_counter = res_counter->next;
	}
	return (result);
}
