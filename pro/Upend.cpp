#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "SKILL QODE";

    ofstream file("senil.txt" , ios :: app);

    if(file.is_open())
    {
        file << str << endl;

        file.close();
    }
    return 0;
}