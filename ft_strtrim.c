/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 22:28:34 by amayor            #+#    #+#             */
/*   Updated: 2020/05/24 18:42:21 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i])
	{
		if (ft_strchr(set, (int)s1[i]) == NULL)
			break ;
		i++;
	}
	while (len >= j)
	{
		if (ft_strrchr(set, (int)s1[len - j]) == NULL)
			break ;
		j++;
	}
	res = ft_substr(s1 + i, 0, (len - (j + i) + 1));
	return (res);
}
