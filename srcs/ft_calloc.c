/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayor <amayor@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 21:49:07 by amayor            #+#    #+#             */
/*   Updated: 2020/05/23 21:47:02 by amayor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *res;

	if (size && (nmemb > (SIZE_MAX / size)))
		return (NULL);
	if (!(res = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
