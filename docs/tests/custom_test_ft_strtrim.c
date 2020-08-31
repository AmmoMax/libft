#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);
char * strrchr(const char*, int c);
char *strchr(const char *s, int c);


int main() 
{
	char s1[] = "          ";
	char set [] = "\t \n";

	printf("%s", ft_strtrim(s1, set));
	return 0;
}