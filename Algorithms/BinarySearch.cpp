
///////////////////////////////////////////////////////
//  -----------------------------------------------  //
//                                                   //
//  FEATURES :                                       //
//     	* Binary Search				      		     //
//													 //
//  					By Kartik Patel				 //
//                                                   //
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

const int SIZE = 20;

int binarySearch(const int [], int size, int value);

int main()
{
	// Array with employees IDs sorted in ascending order
	int IDs[SIZE] = {101, 142, 147, 189, 199, 207, 222,
						234, 289, 296, 310, 319, 388, 394,
						417, 429, 447, 521, 536, 600};
	int results;
	int employeeID;		
	
	// Get an emplyee ID to search for
	cout << "Enter the employee ID you wish to search for: ";
	cin >> employeeID;
	
	// Search for the ID
	results = binarySearch(IDs, SIZE, employeeID);
	
	if (results == 1)    // If results contain -1, the value was not found
		cout << "That number does not exist in the array.\n";

	else				// Otherwise results contains the subscript of the specified employee ID in the array
	{
		cout << "The ID is found at element " << results;
		cout << " in the array.\n";
	}
	return 0;
}



//
//  Binary Search
//
//  Purpose: To perform the Binary Search
//  Parameter(s):
//    <1> array: list of numbers
// 	  <2> size: size of array
// 	  <3> Id: Employee ID to look for
//  Precondition(s): N/A
//  Returns: The position of the number. 
// 				If number not available => returns -1
//

int binarySearch(const int array [], int size, int Id)
{
	int first = 0,
		last = size -1,
		middle,
		position = -1;
	bool found = false;
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;	// Calculate midway point
		if (array[middle] == Id)		// If the value if found
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > Id)	// If value is in lower half
		{
			last = middle -1;
		}
		else						   	//If value is in upper half
		{
			first = middle +1;
		}
	}
	return position;
}