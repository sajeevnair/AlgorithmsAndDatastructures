#include "Header.h"

void printArray(int * a, int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++)
	{
		cout << a[i] << "\t";

	}
	cout << endl;


}


int max(int x, int y){
	return (x > y) ? x : y;
}

void swap(int& x, int& y){
	x = x^y;
	y = x^y;
	x = x^y;
}