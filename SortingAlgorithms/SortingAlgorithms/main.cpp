#include "Header.h"
// the driver
int main(){
	//test code
	int arr[] = { 4, 2, 5, 9, 1 };
	int size = sizeof(arr) / sizeof(int);
	printArray(arr, size );
	swap(arr[0], arr[1]);
	printArray(arr, size);

	char arr2[]= {'a','v','g'};
	printArray(arr2, 3);
	swap(arr2[0], arr2[1]);
	printArray(arr2, 3);

	//for vs ide
	getchar();
	return 0;

}