#include <stdio.h>
int l(char *c[]);
int main()
{
	char arry;
        printf("Enter the character you want measured: %c", arry);
        scanf("%c", &arry);
	int leng = l(arry);
        printf("Lenght is : %d", leng);
	return (0);
}
int l(char *c[])
{
	int i;
		for (i = 0; c[i] != '\0'; i ++)
			return i;
}
