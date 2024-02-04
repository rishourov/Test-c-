#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;


    cout<<"Enter Intergar Number's : ";

    cin>>num1>>num2>>num3;

    if(num1>=num2 && num1>=num3)
    {

        cout<<"This Is Largest Number 1: " <<num1;
    }

    if(num2>=num3 && num2>=num3)
    {

        cout<<"This Is Largest Number 2: " <<num2;
    }

    else
    {
        cout<<"This Is Largest Number 3: " <<num3;

    }
}
