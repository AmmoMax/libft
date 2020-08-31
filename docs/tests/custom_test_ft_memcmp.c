#include <string.h>
#include <stdio.h>


int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main() 
{
	unsigned char s1[5] = "XXXX";
	unsigned char s2[6] = "XXXXX";

	size_t n = 4;

	printf("Standart memcmp: %d\n", memcmp(s1, s2, n));
	printf("Custom ft_memcmp: %d\n", ft_memcmp(s1, s2, n));

	return (0);
}