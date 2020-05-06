#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void * src, size_t n);

// int		main() {
// 	char a[]="hare rama hare rama";
// 	char b[]="hare rama hare rama";
// 	char c[]="hare rama hare rama";
	
// 	memmove(c+5,c,20);
// 	printf("move %s\n",c);
// 	ft_memcpy(a+5,a,20);
// 	printf("ft_memcpy %s\n",a);
// 	memcpy(b+5,b,20);
// 	printf("memcpy %s\n ",b);

// 	return (0);
// }

// crt_memcpy.c
// Illustrate overlapping copy: memmove
// always handles it correctly; memcpy may handle
// it correctly.
//

#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";

int main( void )
{
	printf("Standart memcpy:\n");
   printf( "The string: %s\n", str1 );
   memcpy(str1 + 2, str1, 4);
   printf( "New string: %s\n", str1 );

   strcpy( str1, sizeof(str1), "aabbcc" );   // reset string

	printf("Standart memmove:\n");
   printf( "The string: %s\n", str1 );
   memmove( str1 + 2, str1, 4 );
   printf( "New string: %s\n", str1 );

	printf("Custom ft_memcpy:\n");
    printf( "The string: %s\n", str1 );
   ft_memcpy(str1 + 2, str1, 4);
   printf( "New string: %s\n", str1 );
}