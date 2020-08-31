#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main() 
{
	char	str2[] = "bonjour";
	printf("%s\n", strrchr(str2, 'b'));
	printf("%s\n", ft_strrchr(str2, 'b'));
	return 0;
}