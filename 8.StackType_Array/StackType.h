#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
class FullStack
// exception class thrown
// Push when stack is full
{

};

class EmptyStack
// Exception class thrown
// Pop and top when stack is empty
{

};

template <class ItemType>
class StackType
{
public :
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    void PrintStack();
private :
    int top;
    ItemType items[MAX_ITEMS];

};


#endif // STACKTYPE_H_INCLUDED
