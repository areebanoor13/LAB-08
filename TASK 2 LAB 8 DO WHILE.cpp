#include<iostream>
using namespace std;
int main()
{
	int i=0;
	do 
	{
		int j=1;
		do {
            cout << i << " x " << j << " = " << i * j <<"  ";
            j++;
        } while (j <= 10);


        cout << endl; 
        i++;
    } while (i <= 5);
    return 0;

	
	
}
