#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType
{
public :
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
    void PrintList();
private :
    int length;
    int currentPos;
    ItemType info[MAX_ITEMS];
};

#endif // SORTEDTYPE_H_INCLUDED
