#include <iostream>
using namespace std;
int main() 
{
    int number;
	int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for  (;number > 0; number /= 10) 
	{
        int digit = number % 10;

        for (int j = 0; j < 1; j++) {

            sum += digit;
        }
    }
    cout<< "The sum of the digits is: " << sum<< "\n";

    
    return 0;
}
