#include <iostream>

using namespace std;

template <class T1, class T2, class T3>
T1 among(T1 a, T2 b, T3 c)
{
    a>b? (a>c? cout <<a:cout<<c):(b>c? cout <<b: cout<<c);
}

int main()
{
    among(10000, 200,1000);
}