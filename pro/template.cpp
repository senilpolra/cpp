#include<iostream>

using namespace std;

template<class T1,class T2>
T2 sum(T1 a,T2 b)
{
    return a + b;
}

int main()
{
    cout << sum (30,20) << endl;
}