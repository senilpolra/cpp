#include <iostream>

using namespace std;

int main()
{
	int i,n,sum = 0;
	

	cout<<"Enter the number = ";
	cin>>n;

	for(i=2; i<=n; i+=2)
	
    {
	
    sum += i;
	
    }
	
    cout<<"sum of even number= "<<sum;
	
    return 0;
}
