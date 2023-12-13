#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int a = 2.9654;
    int result;
    int result1;
    int result2;

    result = ceil(a);
    result1 = abs(-10);
    result2 = round(a);

    cout << result << endl;
    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}