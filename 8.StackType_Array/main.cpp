#include <iostream>
#include "StackType.h"
#include "StackType.cpp"

using namespace std;

int main()
{
    StackType<int> st;
    st.Push(2);
    st.Push(4);
    st.Push(5);
    //st.PrintStack();
    st.Pop();
    st.PrintStack();
    if(st.IsFull())
        cout << "Full";
    else
        cout <<"Not Full";
        if(!st.IsEmpty())
            cout<<"Empty";
        else
            cout<<"Not Empty";
    return 0;
}
