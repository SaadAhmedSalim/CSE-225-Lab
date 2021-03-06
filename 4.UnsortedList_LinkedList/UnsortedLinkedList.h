#ifndef UNSORTEDLINKEDLIST_H_INCLUDED
#define UNSORTEDLINKEDLIST_H_INCLUDED
template <class ItemType>
class UnsortedType
{
        struct NodeType
        {
            ItemType info;
            NodeType* next;
        };
public:
        UnsortedType();
        ~UnsortedType();
        bool IsFull();
        int LengthIs();
        void MakeEmpty();
        void RetrieveItem(ItemType&, bool&);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType&);
        void PrintList();
private:
        NodeType* listData;
        int length;
        NodeType* currentPos;
};
#endif // UNSORTEDLINKEDLIST_H_INCLUDED
