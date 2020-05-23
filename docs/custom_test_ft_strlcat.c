#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		count;
	size_t		len_dest;
	char		*d;
	const char	*s;

	count = size;
	d = dst;
	s = src;
	while (count-- != 0 && *d != '\0')
		d++;
	len_dest = d - dst;
	count = size - len_dest;
	if (count == 0)
		return (len_dest + strlen(s));
	while (*s != '\0')
	{
		if (count-- != 1)
		{
			*d = *s;
			d++;
			// count--;
		}
		s++;
	}
	*d = '\0';
	return (len_dest + (s - src));
}

int main() 
{	
	char src1[] = "lorem ipsum dolor sit amet";
	char dst1[] = "0000000000000a";

	char src2[] = "lorem ipsum dolor sit amet";
	char dst2[] = "0000000000000a";

	// char dst2[] = "dst";
	// char src2[] = "src";

	printf("standart strlcat: %lud\n", strlcat(dst1, src1, 15));
	printf("dst1: %s\n", dst1);
	printf("custom ft_strlcat: %lud\n", ft_strlcat(dst2, src2, 15));
	printf("dst2: %s\n", dst2);
	return 0;
}