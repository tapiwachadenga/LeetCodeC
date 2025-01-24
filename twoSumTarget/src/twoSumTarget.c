#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "twoSumTarget.h"

void printArr(int *arr, int size)
{
	char *punc = (char *) malloc(sizeof(char) * 2);
	strcpy(punc, ", ");

	fprintf(stdout, "[ ");

	for(int i = 0; i < size; i++)
	{
		if(i == size - 1) strcpy(punc, " ");
		fprintf(stdout, "%d%s", *(arr + i), punc);
	}
	fprintf(stdout, "]");
}

void swap(int *x, int *y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

int *twoSumTarget(int *arr, int arrSize, int target)
{
	int *result = (int *) malloc(sizeof(int) * 2);
	for(int i = 0; i < arrSize - 1; i++)
		for (int j = i + 1; j < arrSize; j++)
			if(*(arr + i) + *(arr + j) == target)
			{
				*result = *(arr + i);
				*(result + 1) = *(arr + j);
			}

	if( *result > *(result + 1) )
		swap(result, result + 1);

	return result;
}
