#include <iostream>

using namespace std;

class Arith
{
    int a, b;

public:
    Arith()
    {
        cout << "Enter value a :";
        cin >> a >> b;
        cout <<"total is :"<< a + b << endl;
    }
 
    Arith(int a,int b)
    {
        cout <<"multi is :" <<a*b <<endl;
    }
    void func1()
    {
        cout << "hello";
        cout << endl;
    }
    void func2()
    {
        cout << "kem che ";
        cout << endl;
    }
    void func3()
    {
        cout << "maja maja ";
    }
};

int main()
{
    Arith a1;
    Arith a2(5,10);

    a1.func1();
    a1.func2();
    a1.func3();
}
