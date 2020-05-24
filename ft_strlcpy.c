/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 21:14:09 by amayor            #+#    #+#             */
/*   Updated: 2020/05/24 18:32:57 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		count;
	char		*d;
	const char	*s;

	if (dst == NULL || src == NULL)
		return (0);
	count = size;
	d = dst;
	s = src;
	if (count != 0)
		while (--count != 0)
		{
			*d = *s;
			if (*d == '\0' || *s == '\0')
				break ;
			s++;
			d++;
		}
	if (count == 0 && size != 0)
		*d = '\0';
	while (*s)
		s += 1;
	return (s - src);
}
