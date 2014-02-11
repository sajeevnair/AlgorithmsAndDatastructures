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
		printArray(myArray, size);


		// do something with the array
		clock_t begin = clock();
		for (int i = 0; i < REPEAT; i++)
		{
			bubbleSort(myArray, size);

		}
		clock_t end = clock();
		double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

		printArray(myArray, size);
		cout << "Time to sort: " << elapsed_secs/REPEAT << endl;

		// delete the array allocation
		delete[] myArray;
	}
	 
	//  close file
	myFile.close();
	
	//for vs ide wait for user 
	cin.get();

	return 0;

}