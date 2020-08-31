#include <stdio.h>
#include <string.h>


void	*ft_memset(void *dst, int c, size_t count);

void	memset_test()
{
	char *str = "Каждый хороший программист должен знать функцию memset!";
	char *buf1 = strdup(str);
	char *buf2 = strdup(str);
	char *rand = NULL;

	int i = 0;
	
	while(i++ < (int)strlen(str))
	{
		memset(buf1,i,i);
		ft_memset(buf2,i,i);
		
		printf("Test_%d\n", i);
		printf("**********************************\n");
		printf("System memset: %s\n", buf1);
		printf("Custom memset: %s\n", buf2);
		printf("**********************************\n");
		
		if (strcmp(buf1, buf2) != 0)
		{
			printf("Error! Length of bytes to fill: %d\n", i);
			printf("System memset: %s\n", buf1);
			printf("Custom memset: %s\n", buf2);
		}
		else
		{
			printf("OK\n");
		}
	}

	printf("Put to standart memset NULL\n");
	memset(rand, '1', 1);
	printf("Put to custom ft_emset NULL\n");
	ft_memset(rand, '1', 1);

}


int	main()
{
	memset_test();
	return 0;
}

