/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 16:04:02 by amayor            #+#    #+#             */
/*   Updated: 2020/05/21 11:58:29 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*uarr;
	size_t			i;

	i = 0;
	uarr = (unsigned char *)arr;
	while (i < n)
	{
		if (uarr[i] == (unsigned char)c)
			return ((void *)&uarr[i]);
		i += 1;
	}
	return (NULL);
}
