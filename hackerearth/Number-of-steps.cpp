#include<bits/stdc++.h>
 
using namespace std;
 
int printSteps(int a[], int b[], int n, int steps, int min)
{       
    for(int i = 0; i < n; i++)  // Loop to iterate in n times
    {
        while(a[i] > min)       // To check if  any element is greater than minimum element
        {             
            a[i] -= b[i];       // if greater element fount then perform this operation  a[i]=a[i]-b[i]
            steps++;            // count how many time you did above operation 
        }
 
        if(a[i] < min)          // after performing above operation check if you arr[i] is less than minimum or not   
        {               
            min = a[i];         // if found less, update minimum value
            i =- 1;             // to start iteration from beginning set i=-1
        }
        else if(a[i] < 0)      return -1;         //if your a[i] < 0 then return then present is not required so return -1
    }
 
    for(int i = 0; i < n-1; i++)      // iterate till (n-1) to check whether all elements of a are equal
    {                
        if(a[i] ^ a[i+1])      return -1;     // in this line i used XOR you can use assignment operator too to check if previous element is equal to next element. if any element found not equal   return -1
    }
    return steps;              // this return is outside for loop and will be executed if all element are found equal
}
 
 
 
int main()
{
    int n,min = 10000, steps=0;
    cin >> n;
 
    int a[n],b[n];         
 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(min < a[i])      min = a[i];     
 
    }
 
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];    
    }
    cout << printSteps(a,b,n,steps,min);    
}