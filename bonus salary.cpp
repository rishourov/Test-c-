#include <iostream>

using namespace std;

int main()
{

    int salary;
    double yearOfService;

    //double bonus = 0.05 * salary;

    cout<<"Enter Your Salary: ";

    cin>>salary;

    cout<<"Enter Your service: ";

    cin>>yearOfService;

    if(yearOfService>=5)
    {

        double bonus = 0.05 * salary;

        cout << "Congratulations! You qualify for a bonus." <<endl;
        cout << "Net bonus amount: " << bonus <<endl;
    }

    else{
        cout<<"Sorry, you do not qualify for a bonus.";
    }


return 0;


}
