#include <stdio.h>
int af(int b, int c);
int main(void)
{
	int scores['n'];
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
	a = af(sum, n);
	printf(" This is your avarage: %f\n", a);
}
int af(int b, int c)
{
	float s;
	s = b / (1.0 * c);
	return s;
}
