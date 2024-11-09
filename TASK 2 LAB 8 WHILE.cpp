#include<iostream>
using namespace std;
int main()
{
	int i=0;

	while(i<=5)
	{
		int j=1;

		while(j<=10)
	{
		cout<<i<<"x"<<j<<"="<<i*j<<"\t";
		j++;
	}
	cout<<endl;
		i++;
	}

	return 0;
}