///////////////////////////////////////////////////////
//  -----------------------------------------------  //
//                                                   //
//  FEATURES :                                       //
//     	* Linear Search				      		     //
//													 //
//  					By Kartik Patel				 //
//                                                   //
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main()
{
	const int SIZE = 5;
	int tests[SIZE] = {87, 75, 98, 100, 82};
	int results;
	
	// Search the array for 100;
	results = linearSearch(tests, SIZE, 100);
	
	
	if (results == -1)		// If linerSearch returned -1, then 100 was not found
		cout << "You did not earn 100 points on any test\n";
	else					// Otherwise results contains the subscripts of the first 100 in the array
	{
		cout << "you earned 100 points on test: ";
		cout << (results + 1) << endl;
	}
	return 0;
}



//
//  Linear Search
//
//  Purpose: To perform the Linear Search
//  Parameter(s):
//    <1> array: list of numbers
// 	  <2> size: size of array
// 	  <3> value: number to look for
//  Precondition(s): N/A
//  Returns: The position of the number. 
// 				If number not available => returns -1
//

int linearSearch(const int arr[], int size, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;
	
	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}