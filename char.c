#include <stdio.h>
int main(void)
{
	char name[20];
	int i;
	printf( "Enter the Name \t");
	scanf("%s", &name[20]);
	for (i = 1; i < '\0'; i++)
	{
		printf("%c\n", name[i]);
	}
	return 0;
}
