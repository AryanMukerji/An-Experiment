// C++ Program to compute factorial of a number
// Factorial of n = 1*2*3...*n

#include <iostream>
using namespace std;

int main() 
{
    int number, i = 1, factorial = 1;

    cout << "\n Enter a positive integer : ";
    cin >> number;
    
    while ( i <= number ) 
	{
        factorial *= i;      //factorial = factorial * i;
        ++i;
    }

    cout<< "\n Factorial of " << number << " = " << factorial;
	
    return 0;
}