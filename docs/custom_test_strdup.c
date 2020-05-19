#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *s);

int main()
{
	char *s1 = "NULL";

	printf("Standart strdup: %s\n", strdup(s1));
	printf("Custom ft_strdup: %s\n", ft_strdup(s1));
	return 0;
}