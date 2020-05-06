#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int main()
{
	char *s1 = NULL; 
	char s2[] = "In this string 30 characters!!";
	char s3[] = "";
	char s4[] = "1234567890";
	char s5[] = "-1234567890";
	char s6[] = "!@#$%^&*()_+?><'`~:}{";
	char s7[] = "тест";

	printf(" === Starting tests for ft_strlen and strlen! ===\n");
	printf(" String: [%s]\n Output standart strlen: Segmention fault\n Output custom ft_strlen: [%lud]\n**********\n", s1, ft_strlen(s1));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s2, strlen(s2), ft_strlen(s2));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s3, strlen(s3), ft_strlen(s3));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s4, strlen(s4), ft_strlen(s4));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s5, strlen(s5), ft_strlen(s5));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s6, strlen(s6), ft_strlen(s6));
	printf(" String: [%s]\n Output standart strlen: [%lud]\n Output custom ft_strlen: [%lud]\n**********\n", s7, strlen(s7), ft_strlen(s7));
	return 0;
}