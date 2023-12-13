#include<iostream>
using namespace std;

class Square
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
    
    Square mysquare;

    cout<<mysquare.area(a,d)<<endl;
    cout<<mysquare.circ(a,d);

    return 0;
}