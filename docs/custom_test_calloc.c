#include <stdio.h>
#include <stdlib.h>

int main() 
{
	size_t nmemb = 10;
	size_t size = 0;
	int *tmp;
	tmp = (int *)calloc(nmemb, size);
	printf("Standart calloc return: %p\n", tmp);
	return 0;
}