#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *list =  malloc(3 * sizeof(int));
	if ( list == NULL)
	{
		printf("Not enough memory");
		free(list);
		return 1;
	}
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
	for (int i = 0; i < 3; i++)
	{
		printf(" The initial ints coresponding to the int saved in the initial memory alocated %i\n", list[i]);
	}
	//Time passes and you realize you need more memory
	int *tmp = malloc(4 * sizeof(int));
	if (tmp == NULL)
	{
		printf("Not enough memory");
		free(tmp);
		return 1;
	}
	for (int i = 0; i < 3; i++)
	{
		tmp[i] = list[i];
	}
	tmp[3] = 4;
	free(list);
	list = tmp;
	for (int i = 0; i < 4; i++)
	{
		printf("final ints coresponding to the new size of memory block with integers %i\n", list[i]);
	}
	free(list);
	return 0;
}
