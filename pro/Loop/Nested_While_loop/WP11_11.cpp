#include <iostream>

using namespace std;

int main()
{
	int i=1,j=5;
	

	while(i<=5)
	{
		j=1;

		while(j<=i)
		{
		cout<<i<<" ";
		j++;
		}
		i++;
		cout<<"\n";
		}
		return 0;
}