#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char* little, size_t len);

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (i < n)
	{
		if (us1[i] != us2[i])
		{
			return (us1[i] - us2[i]);
		}
		i += 1;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	if (!s)
		return (0);
	while (*s)
	{
		len += 1;
		s++;
	}
	return (len);
}

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

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	unsigned char *us1;
// 	unsigned char *us2;

// 	us1 = (unsigned char *)s1;
// 	us2 = (unsigned char *)s2;
// 	if (n == 0)
// 		return (0);
// 	while (*us1 == *us2 && --n && *us1)
// 	{
// 		if (*us1 != *us2)
// 			return (*us1 - *us2);
// 		us1++;
// 		us2++;
// 	}
// 	return (*us1 - *us2);
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	if (*little == '\0')
// 		return ((char *)big);
// 	while (*big != '\0' && len-- > ft_strlen(little))
// 	{
// 		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
// 			return ((char *)big);
// 		big++;
// 	}
// 	return (NULL);
// }

//======================================================

int main() 
{
	const char *largestring_1 = "";
	const char *smallstring_1 = "Bar";

	const char *largestring_2 = "";
	const char *smallstring_2 = "Bar";

	// const char *largestring_3 = "HelloChimichanga";

	printf("Standart strnstr func: %s\n",strnstr(largestring_1, smallstring_1, 5));
	printf("My ft_strnstr func: %s\n",ft_strnstr(largestring_2, smallstring_2, 5));

	// printf("Standart strnstr func: %s\n",strnstr(largestring_3, "lo", 9));
	// printf("My ft_strnstr func: %s\n",ft_strnstr(largestring_3, "lo", 9));
	return 0;
}