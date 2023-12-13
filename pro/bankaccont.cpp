#include <iostream>

using namespace std;

class Bankaccont
{
    int diposite;
    int balance;
    int withdrawel;
    int total;

public:
    Bankaccont(int d, int b, int t, int w)
    {
        diposite = d;
        balance = b;
        withdrawel = w;
        total = t;
    }

    int balancs(int d, int b)
    {
        cout << b + d  << endl;
    }

    int wit(int b, int w)
{
    if(b>w)
    {
        cout << b - w << endl;
    }
    else
    {                   
        cout<<"insufficient balance";
    }
}
};

int main()
{
    int a, b, c, d;
    cout << "Enter diposite :";
    cin >> a;
    cout << "Enter withdrawel :";
    cin >> b;

    Bankaccont b1(a ,b,c ,d);
    b1.balancs(1000,a);
    b1.wit(1000,b);
    return 0;
}