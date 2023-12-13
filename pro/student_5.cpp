#include <iostream>

using namespace std;

class student
{
    int admno;
    char name[20];
    float eng,math,sci,total;

    float ctotal()
    {
        return eng + math + sci;
    }

    public:
    student()
    {
        cout<<"Enter student no :";
        cin>>admno;
        cout<<endl;
        
        cout<<"Enter student name:";
        cin>>name;
        cout<<endl;
        
        cout<<"Enter student english mark :";
        cin>>eng;
        
        cout<<"Enter student math mark :";
        cin>>math;
        
        cout<<"Enter student sci mark:";
        cin>>sci;
        cout<<endl;
        total = eng + math + sci;
        
    }

    ~student()
    {
        cout<<"student"<<name<<" Object is being destructed";
    }

    void showdata()
    {
        cout<<"\n student no :"<<admno;
        cout<<"\n student name is :"<<name;
        cout<<"\neng\tmath\tsci\ttotal";
        cout<<"n"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<total;
    }
};

int main()
{
    student s1,s2,s3;

    s1.showdata();
    s2.showdata();
}
