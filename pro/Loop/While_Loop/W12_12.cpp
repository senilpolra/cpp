#include <iostream>

using namespace std;

int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        cout << sum << " ";
        i += 2;
    }
    cout << "Sum =" << sum << " ";
    
    return 0;
}