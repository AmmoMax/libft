/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:14:04 by amayor            #+#    #+#             */
/*   Updated: 2020/07/23 22:14:04 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(unsigned long long number, int base)
{
	char	*result;
	char	*code;
	size_t	len;

	if (number == 0)
	{
		if (!(result = ft_strdup("0")))
			return (NULL);
		return (result);
	}
	code = "0123456789ABCDEF";
	len = length_number(number, base);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	while (len !=0)
	{
		result[len - 1] = code[number % base];
		number = number / base;
		len--;
	}
	return (result);
}
