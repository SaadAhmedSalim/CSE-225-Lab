#include <iostream>
#include "stackLinkedList.h"
#include "stackLinkedList.cpp"

using namespace std;

int main()
{
    StackType <int> stackList;
    stackList.Push(1);
    stackList.Push(2);
    stackList.Push(3);
    stackList.Push(4);
    stackList.Push(5);
    stackList.PrintStack();
    stackList.Pop();
    stackList.PrintStack();
    stackList.Pop();
    stackList.PrintStack();
    if(stackList.IsEmpty()==NULL)
        cout<<"Stack List is Not Empty."<<endl;
    else
        cout<<"Stack List is  Empty."<<endl;


    if(stackList.IsFull()==NULL)
        cout<<"Stack List is not Full."<<endl;
    else
        cout<<"Stack List is Full."<<endl;


    return 0;
}
