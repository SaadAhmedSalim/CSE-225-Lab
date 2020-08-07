#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType <int> st;
    cout << "Length is " << st.LengthIs()<<endl;
    st.InsertItem(1);
    st.InsertItem(5);
    st.InsertItem(4);
    st.InsertItem(48);
    st.InsertItem(14);
    st.PrintList();
    cout<<endl;
    cout << "Length is " << st.LengthIs();
    st.DeleteItem(4);
    cout<<endl;
    cout << "Length is " << st.LengthIs()<<endl;
    int n;
    cout<< "Enter Search Number "<<endl;
    cin>> n;
    bool found ;
    st.RetrieveItem(n,found);
    cout<<found<< " is Found "<<endl;
    if(st.LengthIs()== st.IsFull())
         cout<<"List is full "<<endl;
    else
         cout<<"List is not full "<<endl;


    st.MakeEmpty();
    cout << "Length is " << st.LengthIs();

    return 0;
}
