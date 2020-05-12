/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:25:08 by amayor            #+#    #+#             */
/*   Updated: 2020/05/09 18:20:49 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t count;
	size_t len_dest;
	char *d;
	const char *s;

	count = size;
	d = dst;
	s = src;
	while(count-- != 0 && *d != '\0')
		d++;
	len_dest = d - dst;
	//the rest of the space for writing characters from src
	count = size - len_dest;
	if (count == 0)
		return (len_dest + ft_strlen(s));
	while (*s != '\0')
	{
		if (count != 1)
		{
			*d = *s;
			d++;
			count --;
		}
		s++;
	}
	*d = '\0';
	return (len_dest + (s - src));
}