#include<iostream>
using namespace std;

class Square
{
     private:

        int b, h;

     public:
     Square(int a,int d)
     {
        int b = a, h = d;

            cout << 0.5*b*h<<endl;
            cout << 3*b;
     }  
};

int main()
{
    int a,d;
    cout<<"Enter the base :";
    cin>>a;
    cout<<"Enter the height :";
    cin>>d;
    
    Square s1(a,d);
    
    return 0;
}