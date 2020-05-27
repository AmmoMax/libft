/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:15:38 by amayor            #+#    #+#             */
/*   Updated: 2020/05/26 18:49:18 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IN 1
#define OUT 0

static size_t	ft_wc(const char *str, char c)
{
	size_t		count;
	int			state;
	const char	*s;

	s = str;
	count = 0;
	state = OUT;
	while (*s)
	{
		if (*s == c)
		{
			state = OUT;
			s++;
		}
		else if (state == OUT)
		{
			state = IN;
			count++;
			s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	ft_wl(const char *str, char c)
{
	size_t		len;
	const char	*s;

	s = str;
	len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s++)
		len++;
	return (len);
}

static char		**ft_check_mem(char **r, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**r;
	size_t	i;
	size_t	j;
	size_t	sp;

	if (s == NULL || !(r = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1))))
		return (NULL);
	sp = 0;
	i = 0;
	while (i < ft_wc(s, c))
	{
		if (!(r[i] = (char *)malloc(sizeof(char) * (ft_wl(&s[sp], c) + 1))))
			return (ft_check_mem(r, i));
		j = 0;
		while (s[sp] == c)
			sp++;
		while (s[sp] != c && s[sp])
			r[i][j++] = s[sp++];
		r[i][j] = '\0';
		i++;
	}
	r[i] = NULL;
	return (r);
}
