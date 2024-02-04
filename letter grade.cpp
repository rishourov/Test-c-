#include <iostream>

using namespace std;

int main()

{
    int marks;

    cout<<"Enter Your Mark: ";

    cin>>marks;

    if (marks>=90 && marks<=100)
    {
        cout<<"A+ = "<<marks;
    }

    else if(marks>=80 && marks<= 90)
    {
        cout<<"A = "<<marks;
    }
    else if (marks>=70 && marks<=80)
    {
        cout<<"B+ = "<<marks;
    }

    else if(marks>=60 && marks<=70)
    {
        cout<<"B = "<<marks;
    }
    else if(marks>=50 && marks<=60)
    {
        cout<<"C = "<<marks;
    }
    else if(marks>=40 && marks<=50)
    {
        cout<<"D = "<<marks;
    }
    else if(marks>=33 && marks<=40)
    {
        cout<<"E = "<<marks;
    }

    else if(marks>=0 && marks<=32)
    {
        cout<<"Fail";
    }
    else
    {
        cout<<"Indvalide Number";
    }

    return 0;
}
