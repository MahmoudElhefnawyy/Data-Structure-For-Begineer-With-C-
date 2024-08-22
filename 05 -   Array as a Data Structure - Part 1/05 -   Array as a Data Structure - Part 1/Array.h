#pragma once
#include<iostream>
using namespace std;
class Array
{
private:
	int length;
	int size;
	int* arr;
	
public:
	Array(int arr_size);
	
	~Array();
	void fill();
	void Display();
	int geteSize();
	int getLength();
	int searchKey(int key);
	void Append(int num);
	void insert(int index, int value);
	void del_Item(int index);
	void enlarge(int newSize);
	void merge(Array other);
};

