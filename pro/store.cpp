#include <iostream>
#include<string>
using namespace std;

class store
{
public:
    int p[5], j, d = 0, a, o[10], z = 0, n, tot = 0,q,x[10],f=0,t=0;
    double gst,nbill;
    string i[5], c,m;


    store()
    {
        cout << endl << "------------- mission store-------------" << endl
             << endl;

        cout << "--> List Of Items <--" << endl
             << endl;
        i[0] = "milk";
        i[1] = "wheat";
        i[2] = "curd";
        i[3] = "sugar";
        i[4] = "salt";
        p[0] = 30;
        p[1] = 1500;
        p[2] = 15;
        p[3] = 50;
        p[4] = 25;

        cout<< "No.\t"<<"Item\t\t"<<"Price"<< endl;
        cout<<"-----------------------------"<< endl;

        for (j = 0; j < 5; j++)
        {
            cout << j + 1 << "\t";
            cout << i[j] << "\t\t";
            cout << p[j] << endl;
        }
        cout<<"-----------------------------"<< endl<<endl;
    }

    void data()
    {
        cout << "Enter customer details :-" << endl<<endl;
        cout << "Enter customer name :" ;
        cin >> c;
        cout<<endl;
        again :
        cout << "Enter customer mobile number :" ;
        cin>>m;

        d=0;
       d=m.size();
        
        if (d == 10)
        {
            cout<<endl;
        }
        else
        {
            cout << "Invalid Number" << endl;
           goto again;
        }

    }

    void order()
    {
        cout << "Place your order :-" << endl << endl;
         cout<< "No.\t"<<"Item\t\t"<<"Price"<< endl;
        cout<<"-----------------------------"<< endl;

        for (j = 0; j < 5; j++)
        {
            cout << j + 1 << "\t";
            cout << i[j] << "\t\t";
            cout << p[j] << endl;
        }
        cout<<"-----------------------------"<< endl<<endl;
   start:
    

        cout << "Enter 0 for bill (OR) ";

        cout << "Enter your choice : " ;
        cin >> a;
        if (a == 0)
        {
            goto end;
        }
        else
        {
            o[z] = a;
            cout<<"Enter quantity :";
            cin>>q;
            x[z]=q;
            z++;
            cout<<endl;
            goto start;
        }
    

    end:
    
        cout << " ";
    
    }

    void bill()
    {
          z--;
            cout<<endl<<endl;
        cout << "\t"
             << "\tBILL"<<endl << endl;
             cout<<"\t"<<"No.\t"<<"Items"<<"\t"<<"price"<<"\t"<<"Quantity"<<endl;
        cout<<"\t----------------------------"<<endl;
        for (j = 0; j <= z; j++)
        {
            n = o[j];
            f=x[j];
            n--;
            cout<<"\t"<<j+1<<"\t";
            cout << i[n] << "\t" << p[n] << "\t" << f <<endl;
            t=f*p[n];
            tot = tot + t;
        }
        cout<<"\t----------------------------"<<endl;
        cout <<endl<< "\tCustomer Name :" << c << endl;
        cout <<endl<< "\tCustomer Mobile Number : ";
        cout << m;

        gst= tot * 0.18;
        nbill=tot+gst;
        cout << endl<<endl;
        cout<<"\t" << "----------Total bill : " << tot <<"----------"<< endl;
        cout<<"\t" << "-------------GST : " << gst <<"-------------"<< endl;
        cout<<"\t" << "-----------Net bill : " << nbill <<"----------"<< endl;
    }

    ~store()
    {
        cout<<endl<<endl;
        cout<<"\t"<<"---------thankkkkk youuuuuuuuu----------";
    }
};

int main()
{
    store s1;

    s1.data();
    s1.order();
    s1.bill();

    return 0;
}