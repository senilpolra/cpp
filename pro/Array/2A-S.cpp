#include <iostream>

using namespace std;

int main()
{
	int a[3][3],i,j,sum=0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"Enter arry of value =a[][]";
			cin>>a[i][j];
		}
	}

	cout<<" \n ";

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		
			cout<<a[i][j]<<" ";
			sum = sum + a[i][j];
		}
		cout<<" \n ";		
	}

	cout<<" 2Arry sum = "<< sum <<" ";

	return 0;
}