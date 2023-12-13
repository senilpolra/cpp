#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, h;

public:
    Rectangle(int a, int d)
    {
        int l = a, h = d;

        cout << "length is :" << l * h << endl;
        cout << "height is :" << 2 * (l + h);
    }
};

int main()
{
    int a, d;
    cout << "Enter the length:";
    cin >> a;

    cout << "Enter the height:";
    cin >> d;

    Rectangle r1(a, d);

    return 0;
}