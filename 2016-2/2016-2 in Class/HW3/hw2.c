#include <stdio.h>

#define SIZE 100
#define MAGIC_KEY 3	// Caeser Key == 3
void encoding(char *text);
void decoding(char *text);
int main()
{
	char text[SIZE];

	printf(" Input >> ");
	gets(text);

	printf(" Cipher Text >> ");
	encoding(text);
	puts(text);	// print cipher text


	printf(" Plain Text >> ");
	decoding(text);
	puts(text);	// print plain text
	
	return 0;
}

void encoding(char *text)
{
	int i;

	for(i=0; text[i]!=NULL; i++)
		text[i]+=MAGIC_KEY;
}
void decoding(char *text)
{
	int i;

	for(i=0; text[i]!=NULL; i++)
		text[i]-=MAGIC_KEY;

}
