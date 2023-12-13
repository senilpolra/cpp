#include<iostream>

using namespace std;

class pet{
    
    public:

    virtual void print()
    {
        cout<< "The sound of specil animals";
    }
};

class dog : public pet
{
    public:
    void print() override
    {
        cout << "The Dog is Barking" << endl;
    }
};

class cat :  public pet 
{
    public: 
    void print() override
    {
        cout << "The Cat is Meows ";
    }
};

int main()
{
    pet*p1;

    dog d1;
    cat c1;

    p1 = &d1;
    p1 -> print();

    p1 = &c1;
    p1 -> print();
    

}