#include<iostream>
using namespace std;

class Triangle
{
     private:
        int b, h;

     public:
     Triangle(int a,int c)
     {
        int b = a, h = c;

        cout << 0.5*b*h<<endl;
        cout << 3*b;
     }
};

int main()
{
    int a,c;
    cout<<"base is :";
    cin >> a;
    cout<<"height is :";
    cin >> c;

    Triangle s1(a,c);

    return 0;
}