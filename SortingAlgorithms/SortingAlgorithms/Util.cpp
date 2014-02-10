#include "Header.h"


void printArray(int * a, int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++)
	{
		cout << a[i] << "\t";

	}
	cout << "\n";
}

void printArray(char * a, int sizeOfArray){
	for (int i = 0; i < sizeOfArray; i++)
	{
		cout << a[i] << "\t";

	}
	cout << "\n";
}


int max(int x, int y){
	return (x > y) ? x : y;
}

void swap(int& x, int& y){
	x = x^y;
	y = x^y;
	x = x^y;
}

void swap(char& x, char& y){
	x = x^y;
	y = x^y;
	x = x^y;
}