#include "Header.h"
// the driver
int main(){
	//declarations
	int size = 0;
	int* myArray;
	
	//Opens for reading the file
	ifstream myFile("example.txt");

	//while the file has not ended
	while (!myFile.eof())
	{
		// first get the size
		myFile >> size;
		cout << size << endl;
		//dynamically allocate the array of size
		myArray = new int[size];

		// fill the array
		for (int i = 0; i < size; i++)
		{
			myFile >> myArray[i];
		}

		// do something with the array
		printArray(myArray, size);
		bubbleSort(myArray, size);
		printArray(myArray, size);


		// delete the array allocation
		delete[] myArray;
	}
	 
	//  close file
	myFile.close();
	
	//for vs ide wait for user 
	cin.get();

	return 0;

}