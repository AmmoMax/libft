/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:23:47 by amayor            #+#    #+#             */
/*   Updated: 2020/05/18 22:04:37 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	nlen;
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = num_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (nlen + 1))))
		return (NULL);
	res[nlen] = '\0';
	if (n < 0)
	{
		res[i] = '-';
		i++;
		n = n * -1;
	}
	while (i < nlen)
	{
		nlen--;
		res[nlen] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
