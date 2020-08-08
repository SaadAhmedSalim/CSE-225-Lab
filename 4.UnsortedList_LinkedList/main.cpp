#include <iostream>
#include "UnsortedLinkedList.h"
#include "UnsortedLinkedList.cpp"
using namespace std;

int main()
{
    UnsortedType <int> unList;
    unList.InsertItem(2);
    unList.InsertItem(11);
    unList.InsertItem(21);
    unList.InsertItem(14);
    unList.InsertItem(16);
    unList.PrintList();
    cout<<endl;
    cout<<unList.LengthIs()<< " is length"<<endl;
    unList.DeleteItem(14);
    unList.PrintList();
    cout<<endl;
    cout<<unList.LengthIs()<< " is length"<<endl;
    int n;
    cout<<"Enter a Number : ";
     cin>>n;
     bool found;
     unList.RetrieveItem(n,found);
     cout<<found<<endl;

     if(unList.LengthIs()==unList.IsFull())
        cout<<"List is Full"<<endl;
     else
        cout<<"List is not Full"<<endl;

        unList.MakeEmpty();
        cout<<unList.LengthIs()<< " is length"<<endl;

        if(unList.LengthIs()==unList.IsFull())
        cout<<"List is Full";
     else
        cout<<"List is not Full";

    return 0;
}
