#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int number;
    int fact= 1;
    
    cout << "Enter a number: ";
    cin >> number;
 
	do {
		int j=1;
	
		do {
            fact*=i;
        j++;
        } while (j <= 1); 

        i++; 
    } while (i <= number); 

    cout << "The Factorial of " << number << " = " << fact << endl;

    return 0;


}