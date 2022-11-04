#include<stdio.h>
#include<stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
	printf("First call to each function:\n");
	staticArrayInit();
	printf("\n");
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	printf("\n");
	automaticArrayInit();
	printf("\n");
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ",i,array1[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d  ", i, array1[i]+=5);
}
void automaticArrayInit(void)
{
	int array2[3] = {1,2,3};
	int i;

	printf("\nValues on entering automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]);

	printf("\nValues on exiting automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]+=5);
}