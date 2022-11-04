#include<stdio.h>
#include<stdlib.h>

//void bubleSort(int *b[]);

int main()
{
	int i, j, k, tmp;
	int a[5] = {26,5,81,7,63};
	for (i = 0; i < 4; i++)
	{

		for (j = 0; j < 4; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("Loop %d :",i);
		for (j = 0; j < 5; j++)
			printf("%4d",a[j]);
		printf("\n");
	}
}