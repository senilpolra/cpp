#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;

    ifstream file("senil.txt");
    if(file.is_open())
    {
        while(getline(file,str))
        {
            cout << str << endl;
        }
        file.close();
    }
    return 0;
}