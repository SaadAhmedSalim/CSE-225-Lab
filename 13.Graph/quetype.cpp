#include "quetype.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType(int maax)
{
    maxQue = maax + 1;
    font = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 401;
    font = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items;
}


template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    font = maxQue - 1;
    rear = maxQue - 1;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (rear == font);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue == font);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if(IsFull())
        throw FullQueue();
    else
    {
        rear = (rear+1) % maxQue;
        items[rear] = newItem;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty())
        throw EmptyQueue();
    else
    {
        font = (font + 1) % maxQue;
        item = items[font];
    }
}

template<class ItemType>
void QueType<ItemType>::PrintQue()
{
    int x;
    while(!IsEmpty())
    {
        Dequeue(x);
        cout<<x<<endl;
    }
}

