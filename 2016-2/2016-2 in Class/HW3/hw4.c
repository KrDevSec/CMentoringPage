#include <stdio.h>

#define MALE 1
#define FEMALE 0

typedef struct Human Human;
struct Human
{
	char szName[10];
	int year;
	int gender;
};

int main()
{
	Human aHuman;

	printf(" �̸� �Է� : ");
	gets(aHuman.szName);
	printf(" ���� �Է� : ");
	scanf("%d", &aHuman.year);
	printf(" ���� �Է�(��:1, ��:0) : ");
	scanf("%d", &aHuman.gender);

	printf(" ------------------------------ \n");
	printf(" �̸� : %s\n", aHuman.szName);
	printf(" ���� : %d\n", aHuman.year);
	printf(" ���� : %s\n", aHuman.gender ? "��" : "��");

	return 0;
}