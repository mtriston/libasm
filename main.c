#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h> 
#include <unistd.h>
#include "libasm.h"

int main()
{
	int i;

	i = 0;


//	printf("%lu\n", _ft_strlen("Hello"));
//	str2 = _ft_strcpy(str, "MakeFile is Nice thing");
//	printf("%s\n", str2);
//	printf("%d\n", _ft_strcmp("az", "ab"));
	i = _ft_write(43, "Hello, World\n", 13);
	perror("Check");
	printf("i = %d\n", i);
	return (0);
}
