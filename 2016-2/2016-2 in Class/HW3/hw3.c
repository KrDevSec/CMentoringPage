#include <stdio.h>
#include <string.h>
#define SIZE 100
void printText(const char *text, const int org_len);
int main()
{
	int org_len = 0;
	char text[SIZE];
	int index;
	int i;

	printf(" Input >> ");
	gets(text);

	org_len = strlen(text);
	
	for(i=0; i<org_len; i++)
	{
		printf(" Index >> ");
		scanf("%d", &index);
		text[index] = NULL;
		printText(text, org_len);
	}
	return 0;
}
void printText(const char *text, const int org_len)
{
	int i=0;

	printf(" After >> ");
	for(i=0; i<org_len; i++)
		printf("%c", text[i]);

	printf("\n");
}