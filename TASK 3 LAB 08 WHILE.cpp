#include <iostream>
using namespace std;

int main() {
    int number;
    int fact= 1;
    int i = 1;

    cout << "Enter a number: ";
    cin >> number;

    
    while (i <= number) 
	{
        int j = 1; 
        while ( j <= 1;)
		{
            fact *= i;
            j++;
        }
        i++;
    }

    cout << "The Factorial of " << number << " = " << fact << endl;

    return 0;
}
