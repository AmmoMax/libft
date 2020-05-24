/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 20:15:37 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 21:39:04 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	int		result_cmp;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char*)big);
	while (len >= little_len && *big)
	{
		result_cmp = ft_memcmp(big, little, little_len);
		if (result_cmp == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
