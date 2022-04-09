///////////////////////////////////////////////////////
//  -----------------------------------------------  //
//                                                   //
//  FEATURES :                                       //
//     	* Bubble Sort Algoritm	      			     //
//													 //
//  					By Kartik Patel				 //
//                                                   //
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
	const int SIZE = 6;
	
	// Array of unsorted values
	int values[SIZE] = {6, 1, 5, 2, 4, 3};
	
	// Display the unsorted array
	cout << "The unsorted values:\n";
	for (int index = 0; index < SIZE; index++)
	{
		cout << values[index];
	}
	cout << endl;
	
	// Sort the array
	bubbleSort(values, SIZE);
	
	// Display the sorted array
	cout << "The sorted values:\n";
		for (int index = 0; index < SIZE; index++)
	{
		cout << values[index];
	}
	cout << endl;
	
	return 0;
}

//
//  Bubble Sort
//
//  Purpose: To perform Bubble Sort
//  Parameter(s):
//    <1> array: list of numbers
// 	  <2> size: size of array
//  Precondition(s): N/A
//  Returns: N/A
//
void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;
	
	for (maxElement = size - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
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