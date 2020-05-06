/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 11:52:45 by amayor            #+#    #+#             */
/*   Updated: 2020/05/05 12:38:21 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *udest;
	unsigned char buff[n];
	

	udest = (unsigned char *)dest;
	i = 0;
	ft_memcpy(buff, src, n);

	while (i < n)
	{
		udest[i] = buff[i];
		i += 1;
	}
	return dest;
}