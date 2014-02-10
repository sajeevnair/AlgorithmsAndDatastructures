#include "Header.h"

void bubbleSort(int * myArray, int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++)
	{
		for (int j = 0; j < sizeOfArray-1; j++)
		{
			if (myArray[j]>myArray[j+1]){
				swap(myArray[j+1], myArray[j]);
			}
		}
	}
}