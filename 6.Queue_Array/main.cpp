#include <iostream>
#include "QueType.h"
#include "QueType.cpp"

using namespace std;

int main()
{
    QueType <int> qt;
    int x;
    qt.Enqueue(4);
    qt.Enqueue(5);
    qt.Enqueue(6);
    qt.PrintQue();

    if(qt.IsFull())
        cout << "Queue is Full";
    else
        cout <<"Queue is not Full";

        cout<<endl;

        if(!qt.IsEmpty())
            cout<<"Queue is Empty";
        else
            cout<<"Queue is not Empty";

    //qt.Dequeue(x);


    return 0;
}
