#ifndef STACKLINKEDLIST_H_INCLUDED
#define STACKLINKEDLIST_H_INCLUDED
class FullStack
{

};
class EmptyStack
{

};
template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public :
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    void PrintStack();
private :
    NodeType* topptr;
};


#endif // STACKLINKEDLIST_H_INCLUDED
