/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:25:08 by amayor            #+#    #+#             */
/*   Updated: 2020/05/24 15:04:39 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		count;
	size_t		len_dest;
	char		*d;
	const char	*s;

	count = size;
	d = dst;
	s = src;
	while (count-- != 0 && *d != '\0')
		d++;
	len_dest = d - dst;
	count = size - len_dest;
	if (count == 0)
		return (len_dest + ft_strlen(s));
	while (*s != '\0')
	{
		if (count != 1)
		{
			*d++ = *s;
			count--;
		}
		s++;
	}
	*d = '\0';
	return (len_dest + (s - src));
}
