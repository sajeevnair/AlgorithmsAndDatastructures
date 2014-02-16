#include "Header.h"
// the driver
int main(){
	//declarations
	int size = 0;
	int* myArray;
	int lineNumber = 0;
	int lineCount = 0;
	cout << "line no: " << endl;
	cin >> lineNumber;
	//Opens for reading the file
	ifstream myFile("example.txt");
	//while the file has not ended
	while (!myFile.eof())
	{
		// first get the size
		myFile >> size;
		cout << "Size of Array = " << size << endl;
		//dynamically allocate the array of size
		myArray = new int[size];

		// fill the array
		for (int i = 0; i < size; i++)
		{
			myFile >> myArray[i];
		}
		//printArray(myArray, size);
		if (lineNumber != lineCount)
		{
			lineCount++;
		}
		else
		{



			// do something with the array
			if (lineNumber < 12)
			{
				clock_t begin = clock();

				for (int i = 0; i < REPEAT; i++)
				{
					bubbleSort(myArray, size, true);
				}
				clock_t end = clock();
				double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

				//	printArray(myArray, size);
				cout << "Time to sort: " << elapsed_secs / REPEAT << endl;
			}
			else
			{
				clock_t begin = clock();
				bubbleSort(myArray, size, true);

				clock_t end = clock();
				double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

				//	printArray(myArray, size);
				cout << "Time to sort: " << elapsed_secs  << endl;

			}
			

			lineCount++ ;
			break;

		}
		// delete the array allocation
		delete[] myArray;
	}
	//  close file
	myFile.close();
	
	//for vs ide wait for user 
	char x;
	cout << "any char to exit .." << endl;
	cin >> x;
	return 0;

}