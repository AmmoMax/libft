/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 18:26:46 by amayor            #+#    #+#             */
/*   Updated: 2020/05/21 11:57:03 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*udest;
	unsigned char	*usrc;

	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		udest[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
		{
			return (&udest[i + 1]);
		}
		i += 1;
	}
	return (NULL);
}
