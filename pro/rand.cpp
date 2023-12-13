#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int max = 100;
    int min = 43;
    int rn;
    rn = min + rand() % (max - min+1);

    cout << rn << endl;

    return 0;
}
