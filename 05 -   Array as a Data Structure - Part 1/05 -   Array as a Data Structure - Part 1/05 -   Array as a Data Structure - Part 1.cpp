#include <iostream>
#include "Array.h"
int main()
{
    cout << " hello this Array ADT demo\n";
    cout <<"enter the array size\n";
    int ArrSize;    
    cin >> ArrSize;
    Array A1(ArrSize);
    A1.fill();
    A1.Display();
    cout << " the size of array is " << A1.geteSize() << endl;
     cout << " the length of array is " << A1.getLength() << endl;
   /* int key;
    cout << " enter key to search\n";
    cin >> key;
    int index=A1.searchKey(key);
    if (index == -1)
        cout << " item is not found\n";
    else
        cout << " item is found @ position"<<index<<"\n";
    cout << " enter num to append\n";
    int num;
    cin >> num;
    A1.Append(num);
    A1.Display();*/
   /* int pos, value;
    cout << " enter index and value to insert\n";
    cin >> pos >> value;
    A1.insert(pos, value);
    A1.Display();
    cout << " enter index to delete\n";
    cin >> pos ;
    A1.del_Item(pos);
    A1.Display();
    cout << " enter new size of array\n";
    cin >> value;
    A1.enlarge(value);
    cout<<" size of new array is "<<A1.geteSize()<<endl;*/
    cout << "enter size of other array\n ";
    int oth_size;
    cin >> oth_size;
    Array other(oth_size);
    other.fill();
    A1.merge(other);
    A1.Display();

}
