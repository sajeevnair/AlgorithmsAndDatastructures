#include "Header.h"
/* a self aware bubble sort*/
void bubbleSort(int * myArray, int sizeOfArray, bool reverse = false){
	bool hasSwapped = false;
	for (int i = 0; i < sizeOfArray; i++)
	{
		hasSwapped = false;

		for (int j = 0; j < sizeOfArray-1; j++)
		{
			if (reverse)
			{
				if (myArray[j]<myArray[j + 1]){
					swap(myArray[j], myArray[j + 1]);
					hasSwapped = true;
				}
			}
			else
			{
				if (myArray[j]>myArray[j + 1]){
					swap(myArray[j], myArray[j + 1]);
					hasSwapped = true;
				}
			}
			
		}
		if (!hasSwapped){
			break;
		}
	}
}