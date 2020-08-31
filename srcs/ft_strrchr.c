/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 13:55:45 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 21:37:29 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;
	int j;

	len = ft_strlen(s);
	j = 0;
	while (len >= j)
	{
		if (s[len - j] == c)
			return ((char *)&s[len - j]);
		else
			j++;
	}
	return (NULL);
}
