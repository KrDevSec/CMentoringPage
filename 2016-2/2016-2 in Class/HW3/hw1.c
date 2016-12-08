#include <stdio.h>
#define SIZE 100

int mystrlen(const char *str);
int main()
{
	char str[SIZE];

	printf(" Input >> ");
	gets(str);
	
	printf(" mystrlen() = %d\n", mystrlen(str));

	return 0;
}

int mystrlen(const char *str)
{
	int len = 0;

	while(*str++)
		len++;

	return len;
}