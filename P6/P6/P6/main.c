#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
	int s[SIZE];
	int j;

	for (j = 0;j < SIZE;j++) s[j] = 2 + j * 2;

	printf("%s%13s\n","Element","Value");

	for (j = 0;j < SIZE;j++) printf("%7d%13d\n",j,s[j]);
}