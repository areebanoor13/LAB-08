#include <iostream>
using namespace std;

int main() {
    int number;
    int fact= 1;

    cout << "Enter a number: ";
    cin >> number;

    
    for (int i = 1; i <= number; i++) 
	{

        for (int j = 1; j <= 1; j++)
		{
            fact *= i;
        }
        
    }

    cout << "The Factorial of " << number << " = " << fact << endl;

    return 0;
}
