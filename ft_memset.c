/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:23:13 by amayor            #+#    #+#             */
/*   Updated: 2020/05/02 16:28:15 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t count)
{
	unsigned char *tmp;

	tmp = (unsigned char *)dst;
	while (count--)
	{
		*tmp++ = (unsigned char)c;
	}
	return (dst);
}
