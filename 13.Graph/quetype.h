#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

class FullQueue
{

};

class EmptyQueue
{

};

template<class ItemType>
class QueType
{
private :
    int font ;
    int rear ;
    ItemType* items;
    int maxQue;
public :
    QueType();
    QueType(int maax);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void PrintQue();
};

#endif // QUETYPE_H_INCLUDED

