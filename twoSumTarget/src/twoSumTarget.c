#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "twoSumTarget.h"

bool find(int *arr, int size, int value)
{
	for(int i = 0; i < size; i++)
		if( *(arr + i) == value) 
			return true;
	return false;
}

void add(int *arr, int size, int value)
{
	*(arr + size) = value;
}

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

int *newArray(int size)
{
                srand((unsigned) time(NULL));
                int *arr = (int *)malloc(sizeof(int) * size);
                for(int i = 0; i < size; i++)
                        *(arr + i) = 1 + rand() % 11;
		return arr;
}
