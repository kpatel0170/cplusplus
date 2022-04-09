
//////////////////////////////////////
//     Print a solid rectangle      //
/////////////////////////////////////

/*

****
****
****
****

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main 
// {
//     int rows, columns;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << endl;
//     cout << "Enter the number of columns: ";
//     cin >> columns;

//     for (int i = 1; i <= rows; i++)
//     {
//         for(int j = 1; j <= columns; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }





//////////////////////////////////////
//      Simple pyramid pattern      //
//////////////////////////////////////
/*

*
* *
* * * 
* * * *
* * * * *

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;
 
// // main Function
// int main()
// {
//     int n = 5;
//     // Outer loop to handle number of rows
//     // n in this case
//     for (int i = 0; i < n; i++)
//     { 
//         // Inner loop to handle number of columns
//         // values changing acc. to outer loop
//         for (int j = 0; j <= i; j++) 
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 		// Outer loop to handle number of rows
// 	// n in this case
// 	int i = 0, j = 0;
// 	while (i < n) 
//     {
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		while (j <= i) 
//         {
// 			cout << "* ";
// 			j++;
// 		}
// 		j = 0; // we have to reset j value so as it can
// 			// start from beginning and print * equal to i.
// 		i++;
// 		// Ending line after each row
// 		cout << endl;
// 	}
// 	return 0;
// }





////////////////////////////////////////
//   Printing right aligned pyramid   //
////////////////////////////////////////

/*

    *
   **
  *** 
 ****
*****

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// // main Code
// int main()
// {
// 	int n = 5;

// 	//looping rows
// 	for(int i = n; i > 0; i--)
// 	{
//         for(int j = 0; j <= n; j++) //looping columns
//         {
//             if (j>=i)       cout<<"*";
//             else            cout<<" ";
//         }
// 	cout << endl;
// 	}
// 	return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
//     int i = 0, j = 0, k = 0;
// 	while (i < n) 
//     {	
// 		// for number of spaces
// 		while (k < (n - i - 1)) 
//         {
// 			cout << " ";
// 			k++;
// 		}

// 		// resetting k because we want to run k from
// 		// beginning.
// 		k = 0;
// 		while (j <= i) 
//         {
// 			cout << "*";
// 			j++;
// 		}
	
// 		// resetting k so as it can start from 0.
// 		j = 0;
// 		i++;
// 		cout << endl;
// 	}
// 	return 0;
// }





////////////////////////////////////////
//      Inverted pyramid pattern      //
////////////////////////////////////////

/*

* * * * *
* * * *
* * *
* * 
* 

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (int i = n; i > 0; i--) 
//     {
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		for (int j = 0; j < i; j++) 
//         {
// 			cout << "* ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	// Outer loop to handle number of rows
// 	// n in this case
// 	int i = n, j = 0;
// 	while (i > 0)
//     {
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		while (j < i) 
//         {
// 			cout << "* ";
// 			j++;
// 		}
// 		j = 0; // we have to reset j value so as it can
// 			// start from beginning and print * equal to i.
// 		i--;
// 		// Ending line after each row
// 		cout << endl;
// 	}
// 	return 0;
// }






//////////////////////////////////////////////////////
//     Righnt aligned Inverted pyramid pattern      //
/////////////////////////////////////////////////////

/*

* * * * *
  * * * *
    * * *
      * * 
        * 

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	int k = 2 * n - 2;  // number of spaces

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (int i = n; i > 0; i--) 
//     {
// 		// Inner loop to handle number spaces
// 		// values changing acc. to requirement
// 		for (int j = 0; j < n-i; j++)
//         {
// 			cout << " ";
//         }
// 		k = k - 2;    // Decrementing k after each loop
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		for (int j = 0; j < i; j++) 
//         {
// 			cout << "*";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
//     int i = n, j = 0, k = 0;
//     while (i > 0) 
//     {      
//           // for number of spaces
//         while (k < (n - i))
//         {
//             cout << "  ";
//             k++;
//         }
 
//           // resetting k because we want to run k from
//         // beginning.
//         k = 0;
//         while (j < i) 
//         {
//             cout << "* ";
//             j++;
//         }
       
//           // resetting k so as it can start from 0.
//         j = 0;
//         i--;
//         cout << endl;
//     }    
// 	return 0;
// }





/////////////////////////
//      Triangle       //
/////////////////////////

/*

        * 
       * * 
      * * * 
     * * * * 
    * * * * * 

*/

//////////////////////
//   Mehtod 1
//////////////////////

// #include <iostream>
// using namespace std;

// // Function to demonstrate printing pattern
// void triangle(int n)
// {
// 	int k = 2 * n - 2;      // number of spaces

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (int i = 0; i < n; i++) {

// 		// Inner loop to handle number spaces
// 		// values changing acc. to requirement
// 		for (int j = 0; j < k; j++)
// 			cout << " ";
// 		k = k - 1;      // Decrementing k after each loop

// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		for (int j = 0; j <= i; j++) 
//         {
// 			cout << "* ";
// 		}
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	int n = 5;
// 	triangle(n);
// 	return 0;
// }

//////////////////////
//   Mehtod 2
//////////////////////

// #include <iostream>
// using namespace std;

// void triangle(int n)
// {
// 	// Number of spaces
// 	int i, j, k = n;

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (i = 1; i <= n; i++) 
//  {
// 		// Inner loop for columns
// 		for (j = 1; j <= n; j++) 
//      {
// 			// Condition to print star pattern
// 			if (j >= k)     cout << "* ";
// 			else            cout << " ";
// 		}
// 		k--;
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	int n = 5;
// 	triangle(n);
// 	return 0;
// }

//////////////////////
//   Mehtod 3
//////////////////////

// #include <iostream>
// using namespace std;

// void triangle(int n)
// {
// 	int i = 0, j = 0, k = 0;
// 	while (i < n) {
	
// 		// for spacing
// 		while (k <= n - i - 2) {
// 			cout << " ";
// 			k++;
// 		}
// 		k = 0;
	
// 		// For Pattern printing
// 		while (j < 2 * i - 1) {
// 			cout << "*";
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	int n = 5;
// 	triangle(n);
// 	return 0;
// }





///////////////////////////////
//      Number Pattern       //
///////////////////////////////

/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	// initializing starting number
// 	int num = 1;

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (int i = 0; i < n; i++) 
//     {
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		for (int j = 0; j <= i; j++)
// 			cout << num << " ";
// 		// Incrementing number at each column
// 		num = num + 1;
// 		cout << endl;
// 	};
// 	return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
//     int i = 1, j = 0;
// 	while (i <= n) 
//     {
// 		while (j <= i - 1) 
//         {
// 			cout << i << " ";
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 		cout << endl;
// 	}
// 	return 0;
// }





/////////////////////////////////
//      Alphabet Pattern       //
/////////////////////////////////

/*

A 
B B 
C C C 
D D D D 
E E E E E 

*/

//////////////////////
//  Using for loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	// Initializing value corresponding to 'A'
// 	// ASCII value
// 	int num = 65;

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (int i = 0; i < n; i++) 
//     {
// 		// Inner loop to handle number of columns
// 		// values changing acc. to outer loop
// 		for (int j = 0; j <= i; j++) 
//         {
// 			// Explicitly converting to char
// 			char ch = char(num);
// 			cout << ch << " ";
// 		}
// 		num = num + 1;
// 		cout << endl;
// 	}
// 	return 0;
// }

//////////////////////
//  Using while loop
//////////////////////

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;
// 	int i = 1, j = 0;

// 	// assigning ASCII value of A which is 65
// 	int num = 65;

// 	// converting ASCII value to character,
// 	// now our alpha variable is having
// 	// value A after typecasting.
// 	char alpha = char(num);
// 	while (i <= n) 
//     {
// 		// alpha is having A value and it
// 		// will change as soon as alpha
// 		// increased or decreased.
// 		while (j <= i - 1) {
// 			cout << alpha << " ";
// 			j++;
// 		}
// 		alpha++;
// 		// we have to reset j value so as it can
// 		// start from beginning and print * equal to
// 		// i.
// 		j = 0;
// 		i++;
// 		cout << endl;
// 	}
// 	return 0;
// }




/////////////////////////
//   Practice Problems
////////////////////////
/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

/*

A 
B C 
D E F 
G H I J 
K L M N O 

*/