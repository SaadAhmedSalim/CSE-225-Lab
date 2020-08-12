#include<iostream>
#include "stackLinkedList.h"
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topptr = NULL;

}
template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while(topptr != NULL)
    {
        tempPtr = topptr;
        topptr = topptr->next;
        delete tempPtr;
    }
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topptr == NULL);
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location ;
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
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if(IsEmpty())
        throw EmptyStack();
        else
            return topptr->info;
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
        else
        {
            NodeType* location ;
            location = new NodeType;
            location->info = newItem;
            location->next = topptr;
            topptr = location;
            cout<<"Inserting "<<newItem<<endl;
        }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if(IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType* tempPtr;
        tempPtr = topptr;
        topptr = topptr->next;
        delete tempPtr;
        cout<<"Deleting "<<tempPtr->info<<endl;
    }
}
template <class ItemType>
void StackType<ItemType>::PrintStack()
{
    NodeType* temp;
    temp = topptr;
    cout<<"Printing Stack "<<endl;
    while(temp!= NULL)
    {
        cout<<temp->info<<endl;
        temp = temp->next;
    }
}
