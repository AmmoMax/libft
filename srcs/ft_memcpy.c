/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:06:41 by amayor            #+#    #+#             */
/*   Updated: 2020/05/28 11:09:20 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*usrc;
	unsigned char	*udest;

	if (!n || dest == src)
		return (dest);
	i = 0;
	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	while (i < n)
	{
		udest[i] = usrc[i];
		i++;
	}
	return (dest);
}
