#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int main() {
	char content[] = "abcd";

	// printf("%p", ft_lstnew((void *)content));
	printf("%ld", ft_strlen(content));
	return 0;
}