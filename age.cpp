#include <iostream>

using namespace std;

int main()
{

    int ali,nurul,bipul;

    cout<<"Enter your age Ali: ";

    cin>>ali;

    cout<<"Enter your age Nurul: ";

    cin>>nurul;

    cout<<"Enter your age Bipul: ";

    cin>>bipul;


    if(ali>nurul && ali> bipul)
    {

        cout<<"ALi Big";

    }

    else if(nurul>ali && nurul>bipul)
    {

        cout<<"Nurul Big";
    }
    else
    {
        cout<<"Bipul Big";
    }



    return 0;
}
