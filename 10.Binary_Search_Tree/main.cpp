#include "QueType.h"
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include <iostream>

using namespace std;

int main()
{
    TreeType <int> tre;
    tre.InsertItem(4);
    tre.InsertItem(9);
    tre.InsertItem(2);
    tre.InsertItem(7);
    tre.InsertItem(3);
    tre.InsertItem(11);
    tre.InsertItem(17);
    tre.InsertItem(0);
    tre.InsertItem(5);
    tre.Print();
    cout<<endl;
    tre.DeleteItem(7);
    tre.Print();
    cout<<endl;

    int n;
    bool found;
    cout<< "Take any Number "<<endl;
    return 0;
}
