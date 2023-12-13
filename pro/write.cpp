#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "Hello";

    ofstream file("senil.txt");

    if(file.is_open())
    {
        file << str << endl;

        file.close();
    }
    return 0;
}