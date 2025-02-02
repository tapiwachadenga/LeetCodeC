#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "twoSumTarget.h"

int main()
{
	// int arr[] = {3, 7, 5, 2, 8, 6};
	// int target = 14;
	srand( (unsigned) time (NULL) );
	int size =  1 + rand() % 10;
	int target = 10 + rand() % 16;
	int *arr = newArray(size);
	/*
	printf("Before swap\narr[0] = %d\tarr[1] = %d\n", arr[0], arr[1]);
	swap(arr, arr + 1);
	printf("After swap\narr[0] = %d\tarr[1] = %d\n", arr[0], arr[1]);
	*/

	int *result = twoSumTarget(arr, size, target);

	fprintf(stdout, "twoSumTarget: \n");
	fprintf(stdout, "Arr: ");
	printArr(arr, size);
	printf("\n");
	int newElement = 1 + rand() % 10;
	// size++;
	fprintf(stdout, "\nadd(%d)\n", newElement);
	add(arr, size, newElement);	
	size++;
	fprintf(stdout, "Arr: ");
	printArr(arr, size);
	printf("\n");
	printf("\n");
	int randValue = 1 + rand() % 11;
	fprintf(stdout, "find(%d) = %s", randValue, find(arr, size, randValue) ? "true": "false" );
	printf("\n");
	printf("\n");
	fprintf(stdout, "target: %d", target);
	printf("\n");
	fprintf(stdout, "result: ");
	printArr(result, 2);
	printf("\n");
}
