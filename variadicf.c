#include <stdio.h>
#include <stdarg.h>
int max(int num_args, ...);
int main(void)
{
	max(4, 4, 5, 6, 8);
	return 0;
}
int max(int num_args, ...)
{
	va_list args;
	va_start(args, num_args);
	for (int i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);
		printf("x is %d\n", x);
	}
	return 0;
}
