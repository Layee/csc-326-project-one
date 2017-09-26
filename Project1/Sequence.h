#ifndef _SEQUENCE
#define _SEQUENCE
template <class ItemType>
class Sequence
{

private:
	int num_used;
	int capacity;
	ItemType * myarray;


public:
	Sequence();
	Sequence(const ItemType& Size);
	~Sequence();
	bool isEmpty();
	bool isFull();
	int Arraycapacity(); // return array capacity
	int numOfElement(); // return num of element
	ItemType& font(const ItemType& anEntry); // return the front item in the container
	ItemType& back(const ItemType& anEntry); // return the back item in the container
	void push_back(const ItemType& anEntry);
	void pop_back(ItemType& anEntry);
	//ItemType At(int i);
	void resize(int newSize);
	void  insert(int i, const ItemType& anEntry);


};

#include "Sequence.cpp"
#endif
