#include "Array.h"

Array::Array(int arr_size)
{
	length = 0;
	size = arr_size;
	arr = new int[arr_size];
 
}

Array::~Array()
{
	cout << "salam 3alekom\n";
}

void Array::fill()
{
	int no_item;
	cout << "enter length would you want to fill\n";
	cin >> no_item;
	if (no_item > size)
	{
		cout << "no items must be smaller than array size\n";
		return;
	}
	else
	{
		for (int i = 0; i < no_item; i++)
		{
			cout << "enter item no " << i+1 << endl;
			cin >> arr[i];
			length++;
		}
	}
}

void Array::Display()
{
	cout << " Display array content\n";
	for (int i= 0; i < length; i++)
	{
		
		cout << arr[i] << " ";
	}
	cout << endl;
}

int Array::geteSize()
{
	return size;
}

int Array::getLength()
{
	return length;
}

int Array::searchKey(int key)
{
	int index = -1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == key)
		{
			index = i;		
			break;
		}
	}
	return index;
}

void Array::Append(int num)
{
	if (size > length)
	{
		arr[length] = num;
		length++;
	}
	else
		cout << " array is full , can't append \n";
}

void Array::insert(int index, int value)
{
	if (index>=0&& index<size)
	{
		for (int i = length; i > index; i--)
		{
			arr[i] = arr[i - 1];

		}

		arr[index] = value;
		length++;
	}
	else
		cout << " index out of range\n";
}

void Array::del_Item(int index)
{
	
		if (index >= 0 && index < length)
		{
			for (int i = index; i < length-1 ; i++)
			{
				arr[i] = arr[i + 1];
			}
			length--;
		}
}

void Array::enlarge(int new_Size)
{
	if (new_Size > size)
	{  
		size = new_Size;
		int* old = arr;
		arr = new int[new_Size];
		for (int i = 0; i < length; i++)
		{
			arr[i]=old[i] ;
		}
		delete[]  old;
	}
	else
		cout << " new size must be  > size\n";

}

void Array::merge(Array other)
{
	int newSize = size+other.geteSize();
	size = newSize;
	int* old = arr;
	arr = new int[newSize];
	int i;
	for (i = 0; i < length; i++)
	{
		arr[i] = old[i];
		
	}
	delete[]old;
	int j = i;
	for (int i = 0; i < other.getLength(); i++)
	{
		arr[i + j] = other.arr[i];
		length++;
	}
	
}




	  