#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char* little, size_t len);

int main() 
{
	// const char *largestring_1 = "Foo Bar Baz";
	// const char *smallstring_1 = "Bar";

	// const char *largestring_2 = "Foo Bar Baz";
	// const char *smallstring_2 = "Bar";

	const char *largestring_3 = "HelloChimichanga";

	// printf("Standart strnstr func: %s\n",strnstr(largestring_1, smallstring_1, 5));
	// printf("My ft_strnstr func: %s\n",ft_strnstr(largestring_2, smallstring_2, 5));

	printf("Standart strnstr func: %s\n",strnstr(largestring_3, "lo", 9));
	printf("My ft_strnstr func: %s\n",ft_strnstr(largestring_3, "lo", 9));
	return 0;
}