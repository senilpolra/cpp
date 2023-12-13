#include<iostream>
using namespace std;

class Triangle
{
     private:
        int base, height;

     public:
        int b = base, h = height;

        int area(int b, int h)
        {
            return 0.5*b*h;
        }
        int circ(int b, int h)
        {
            return 3*b;
        }
};

int main()
{
    int a,d;
    cout<<"Enter the value:";
    cin>>a>>d;
    
    Triangle mytriangle;

    cout<<mytriangle.area(a,d)<<endl;
    cout<<mytriangle.circ(a,d);

    return 0;
}