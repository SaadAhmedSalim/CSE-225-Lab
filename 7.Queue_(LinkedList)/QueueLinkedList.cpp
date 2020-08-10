#include<iostream>
#include "QueueLinkedList.h"
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType()
{
    font = NULL;
    rear = NULL;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* temptr;
    while (font !=NULL)
    {
        temptr = font;
        font = font->next;
        delete temptr;
    }
    rear = NULL;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (font == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if(IsFull())
    {
        throw FullQueue();
    }
    else
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if(rear == NULL)
            font = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty())
        throw EmptyQueue();
    else
    {
        NodeType* temptr;
        temptr = font;
        item = font->info;
        font = font->next;
        if(font == NULL)
            rear = NULL;
        delete temptr;
    }
}
template<class ItemType>
void QueType<ItemType>::PrintQue()
{
    int temp;
    cout<<"Printing Queue "<<endl;
    while(!IsEmpty())
    {
        Dequeue(temp);
        cout<<temp<<endl;
    }
}
