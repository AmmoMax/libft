/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:26:21 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 21:47:28 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*res;
	char	*res_start;
	size_t	len;

	len = ft_strlen(s);
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	res_start = res;
	while (*s)
	{
		*res = *s;
		res++;
		s++;
	}
	*res = '\0';
	return (res_start);
}
