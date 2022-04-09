///////////////////////////////////////////////////////
//  -----------------------------------------------  //
//                                                   //
//  FEATURES :                                       //
//     	* Selection Sort Algoritm	      		     //
//													 //
//  					By Kartik Patel				 //
//                                                   //
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void selectionSort(int[], int);
void swap (int &, int &);

int main()
{
	const int SIZE = 6;
	
	// Array ofunsorted values
	int values[SIZE] = {6, 1, 5, 2, 4, 3};
	
	// Display the unsorted array
	cout << "The unsorted values:\n";
	for (int index = 0; index < SIZE; index++)
	{
		cout << values[index] << " ";
	}
	cout << endl;
	
	// Sort the array
	selectionSort(values, SIZE);
	
	// Display the sorted array
	cout << "The sorted values:\n";
	for (int index = 0; index < SIZE; index++)
	{
		cout << values[index] << " ";
	}
	cout << endl;
}

//
//  Selection Sort
//
//  Purpose: To perform Selection Sort
//  Parameter(s):
//    <1> array: list of numbers
// 	  <2> size: size of array
//  Precondition(s): N/A
//  Returns: N/A
//

void selectionSort(int array[], int size)
{
	int minIndex, minValue;
	
	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
	}
}


//
//  swap
//
//  Purpose: To swap two variables
//  Parameter(s):
//    <1> a: number to swap
// 	  <2> b: number to swap
//  Precondition(s): N/A
//  Returns: N/A
//
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}