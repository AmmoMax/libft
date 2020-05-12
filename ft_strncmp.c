/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 23:29:48 by amayor            #+#    #+#             */
/*   Updated: 2020/05/12 20:40:00 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *us1;
	unsigned char *us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	//work are characters are equal, not \0 and n exists
	while (*us1 == *us2 && --n && *us1)
	{
		if(*us1 != *us2)
			return (*us1 - *us2);
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}