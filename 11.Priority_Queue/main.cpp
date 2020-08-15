#include <iostream>
#include "heaptype.h"
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType<int> pq(10);
    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);
    pq.Print();
    if(pq.IsEmpty()==0)
        cout<< "Queue is Empty."<<endl;

    else
         cout<< "Queue is not Empty"<<endl;
}
