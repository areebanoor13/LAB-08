#include<iostream>
using namespace std;
int main() 
{
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    do {
        int digit = num % 10;  

        do {
            sum += digit;  
            break;         
        } while (false);  

        num /= 10;  
    } while (num > 0); 

    cout << "The sum of the digits is: " << sum << endl;  

    return 0;
}

