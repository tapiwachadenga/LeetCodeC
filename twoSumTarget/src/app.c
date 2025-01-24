#include <stdio.h>
#include "twoSumTarget.h"

int main()
{
	int arr[] = {3, 7, 5, 2, 8, 6};
	int target = 14;
	int size = 6;
	/*
	printf("Before swap\narr[0] = %d\tarr[1] = %d\n", arr[0], arr[1]);
	swap(arr, arr + 1);
	printf("After swap\narr[0] = %d\tarr[1] = %d\n", arr[0], arr[1]);
	*/

	int *result = twoSumTarget(arr, size, target);

	printf("twoSumTarget: ");
	printArr(arr, size);
	printf("\n");
	printArr(result, 2);
	printf("\n");
}
