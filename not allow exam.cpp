#include <iostream>

using namespace std;

int main()
{

    double qnt,price;

    cout<<"Enter Your qnt: ";

    cin>>qnt;

    cout<<"Enter Price: ";

    cin>>price;

    double total = qnt * price;

    if(price>0){

     double  dis =  total * 0.15;

     cout<<"After price dis: "<<dis <<endl;
       cout<<"total: " <<total-dis<<endl;

    }


    return 0;
}
