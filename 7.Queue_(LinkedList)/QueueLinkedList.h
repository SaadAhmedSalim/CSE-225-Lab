#ifndef QUEUELINKEDLIST_H_INCLUDED
#define QUEUELINKEDLIST_H_INCLUDED
class FullQueue
{

};

class EmptyQueue
{

};

template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public :
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
    void PrintQue();
private:
    NodeType *font, *rear;
    };

#endif // QUEUELINKEDLIST_H_INCLUDED
