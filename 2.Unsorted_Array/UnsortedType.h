#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;
template <class ItemType>
class UnsortedType
{
private :
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
    void Display();
    bool IsEmpty();
};
#endif // UNSORTEDTYPE_H_INCLUDED
