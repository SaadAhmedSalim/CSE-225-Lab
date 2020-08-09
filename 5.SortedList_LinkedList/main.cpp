#include <iostream>
#include "SortedList.h"
#include "SortedList.cpp"

using namespace std;

int main()
{
    SortedType <int> st;
    st.InsertItem(34);
    st.InsertItem(33);
    st.InsertItem(12);
    st.InsertItem(23);
    st.PrintList();
    cout<<endl;
    cout<<"Length is "<<st.LengthIs()<<endl;
    st.DeleteItem(23);
    st.PrintList();
    cout<<endl;
    cout<<"Length is "<<st.LengthIs()<<endl;
    int n;
    cout<<"Take a Number "<<endl;
    cin>>n;
    bool found;
    st.RetrieveItem(n,found);
    cout<<found<<" is Found "<<endl;

    if(!st.IsFull())
        cout<< "List is not Full.";
    else
        cout<< "List is Full.";

    cout<<endl;
    cout<<"Length is "<<st.LengthIs()<<endl;
    st.MakeEmpty();
    cout<<st.LengthIs()<< " List is Empty";
    return 0;
}
