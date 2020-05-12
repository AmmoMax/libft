#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);


int main() 
{	char dst1[] = "dst";
	char src1[] = "src";

	char dst2[] = "dst";
	char src2[] = "src";

	printf("standart strlcat: %lud\n", strlcat(dst1, src1, 5));
	printf("dst1: %s\n", dst1);
	printf("custom ft_strlcat: %lud\n", ft_strlcat(dst2, src2, 5));
	printf("dst2: %s\n", dst2);
	return 0;
}