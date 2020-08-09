#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED
template <class ItemType>
class SortedType
{
        struct NodeType
        {
            ItemType info;
            NodeType* next;
        };
public:
        SortedType();
        ~SortedType();
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
#endif // SORTEDLIST_H_INCLUDED
