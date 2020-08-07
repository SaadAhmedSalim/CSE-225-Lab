#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType <int> ut;
    ut.InsertItem(1);
    ut.InsertItem(9);
    ut.InsertItem(5);
    ut.InsertItem(4);
    ut.InsertItem(3);
    ut.Display();
    cout<<"Length is "<<ut.LengthIs()<<endl;
    ut.DeleteItem(3);
    ut.Display();
    cout<<"Length is "<<ut.LengthIs()<<endl;
    int n;
    cout<<"Inter a number ";
    cin>>n;
    bool found ;
    ut.RetrieveItem(n,found);
    cout<<found<<endl;
    if(ut.LengthIs()==ut.IsFull())
        cout<<"List is Full"<<endl;
    else
        cout<<"List is not Full"<<endl;

        ut.MakeEmpty();
        cout<<"Length is "<<ut.LengthIs()<<endl;

        if(ut.LengthIs()==ut.IsFull())
        cout<<"List is Full";
    else
        cout<<"List is not Full";
    return 0;
}
