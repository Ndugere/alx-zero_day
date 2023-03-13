#include <stdio.h>
int main (void)
{
	int scores[3];
	float sum = 0;
	int i;
	float a;
	int n;
	
	printf("Enter the number of exams that the student took: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf(" Enter the scores presing enter each time: \n");
		scanf("%d", &scores[i]);
		sum = sum + scores[i];
	}
	a = sum / (1.0 * n);

	sum = ( scores[0] + scores[1] + scores[2]) / 3.0;
	printf(" This is your avarage: %f\n", a);
	return 0;
}
