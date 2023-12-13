#include <iostream>

using namespace std;

class car
{
    public:

    static int a;
    car()
    {
        a++;
    }
    void display()
    {
        cout << "display function call..." << endl;
    }
    static void Display()
    {
        cout << "static function call..." << endl;
    }
};
int car :: a = 0;

int main()
{
    car c1;
    c1.display();

    car c2;
    c2.Display();

    cout << "progeam is ovare " << car :: a <<endl;
}
