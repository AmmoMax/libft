#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int main()
{
    const char str[] = "t";
    char dst[] = "x";
    size_t size = 3;

	const char str_c[] = "t";
    char dst_c[] = "x";
    size_t size_c = 3;
    
    printf("standart strlcpy: %lud\n", strlcpy(dst, str, size));

	printf("dst for standart: %s\n", dst);

	printf("********************************\n");

	printf("custom ft_strlcpy: %lud\n", ft_strlcpy(dst_c, str_c, size_c));
    
    printf("dst for custom: %s\n", dst_c);

    return 0;
}
