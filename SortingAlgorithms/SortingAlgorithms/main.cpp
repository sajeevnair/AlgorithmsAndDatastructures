#include "Header.h"

int main(){

	int arr[] = { 4, 2, 5, 9, 1 };
	printArray(arr, sizeof(arr)/sizeof(int));
	swap(arr[0], arr[1]);
	printArray(arr, sizeof(arr) / sizeof(int));

	getchar();
	return 0;

}