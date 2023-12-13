#include<iostream>
using namespace std;

class Rectangle
{
     private:
        int length, height;

     public:
        int l = length, h = height;

        int area(int l, int h)
        {
            return l*h;
        }
        int circ(int l, int h)
        {
            return 2*(l+h);
        }
};

int main()
{
    int a,d;
    cout<<"Enter the value:";
    cin>>a>>d;
    
    Rectangle myrectangle;

    cout<<myrectangle.area(a,d)<<endl;
    cout<<myrectangle.circ(a,d);

    return 0;
}