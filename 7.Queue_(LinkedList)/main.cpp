#include<iostream>
#include "QueueLinkedList.h"
#include "QueueLinkedList.cpp"
using namespace std;

int main()
{
    QueType <int> LinkQue;
    LinkQue.Enqueue(2);
    LinkQue.Enqueue(4);
    LinkQue.Enqueue(5);
    LinkQue.Enqueue(7);
    LinkQue.PrintQue();
    if(LinkQue.IsEmpty()==NULL)
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    int x;
    LinkQue.Dequeue(x);

    return 0;
}
