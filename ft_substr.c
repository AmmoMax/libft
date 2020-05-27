/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:52:01 by amayor            #+#    #+#             */
/*   Updated: 2020/05/26 18:58:22 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	int				i;
	unsigned int	max_size;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else
		max_size = ft_strlen(s) - start;
	if (len > max_size)
		len = max_size;
	i = 0;
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len != 0)
	{
		res[i] = s[start + i];
		i++;
		len--;
	}
	res[i] = '\0';
	return (res);
}
