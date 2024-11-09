#include<iostream>
using namespace std;
int main()
{
	int rows;
	int i=1;
	cout<<"Enter number of rows:";
	cin>>rows;
	do
	{
		int j=1;
		 do {
            cout << "* ";
            j++;
        } while (j <= i);

        cout << endl;
        i++;
    } while (i <= rows);

    return 0;
	}
