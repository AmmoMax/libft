/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:50:26 by amayor            #+#    #+#             */
/*   Updated: 2020/08/31 14:51:10 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *str)
{
	size_t			i;

	i = 0;
	if (str)
		while (str[i])
		{
			str[i] = '\0';
			i++;
		}
}
