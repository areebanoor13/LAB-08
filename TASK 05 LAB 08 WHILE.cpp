#include <iostream>
using namespace std;
int main() 
{
    int number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0) 
    {
        int dig= number % 10; //digit
        while (dig> 0)
        {
            sum += dig;  
            break;          
        }
        number /= 10; 
    }
    cout << "The sum of the digits is: " << sum << "\n";
    return 0;
}
