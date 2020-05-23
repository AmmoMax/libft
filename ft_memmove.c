/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 11:52:45 by amayor            #+#    #+#             */
/*   Updated: 2020/05/21 11:57:43 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udest;
	unsigned char	*usrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	i = 0;
	if (usrc < udest)
		while (n > 0)
		{
			n -= 1;
			udest[n] = usrc[n];
		}
	else
		while (i < n)
		{
			udest[i] = usrc[i];
			i += 1;
		}
	return (dest);
}
