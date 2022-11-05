#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
	int i, j, k, tmp;
	int a[SIZE] = { 1254,77,8,774,54 };
	for (i = 0; i < SIZE-1; i++)
	{
		for (j = 0, k = 0; j < SIZE-1-i; j++)//a要求是加入-i
		{
			if (a[j] > a[j + 1])//向上浮一個
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			else//b要求，都沒有改變則跳出
			{
				k++;
				if (k == SIZE-1-i) goto end;
			}
		}
		printf("Loop %d :",i+1);
		for (j = 0; j < SIZE; j++)
			printf("%5d",a[j]);
		printf("\n");
	}
end:
	printf("\na[] =   ");
	for (j = 0; j < SIZE; j++)
		printf("%5d", a[j]);
	printf("\n");
}