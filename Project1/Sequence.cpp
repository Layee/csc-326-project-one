#include "Sequence.h"
template<class ItemType>
Sequence<ItemType>::Sequence() {
	capacity = 10;
	myarray = new ItemType[capacity];
	num_used = 0;
	

}




template<class ItemType>
Sequence<ItemType>::Sequence(const ItemType& Size) : {
	capacity = Size;
	myarray = new ItemType[capacity];
	num_used = 0;
}








// check if the container is empty
template<class ItemType>
bool Sequence<ItemType>::isEmpty() {
	if (nume_used == 0) {
		return true;
	}
	else {
		return false;
	}
}



// check if the container is full
template <class ItemType>
bool Sequence<ItemType>::isFull() {
	if (num_used == capacity) {
		return true;
	}
	else {
		return false;
	}
}



// Return the total element being used
template<class ItemType>
int Sequence<ItemType>::numOfElement() {
	return num_used;
}


// Return array capacity
template<class ItemType>
int Sequence<ItemType>::Arraycapacity() {
	return capacity;
}


// Return a reference to the first items in the container
template<class ItemType>
ItemType& Sequence<ItemType>::font(const ItemType& anEntry) {
	anEntry = myarray[0];
	return anEntry;
}

// Return a reference of the last item in the container
template<class ItemType>
ItemType& Sequence <ItemType>::back(const ItemType& anEntry) {
	anEntry = myarray[capacity - 1];
	return anEntry;
}


// Push item of the back of the array
template <class ItemType>
void Sequence<ItemType>::push_back(const ItemType& anEntry) {
	myarray[capacity - 1] = anEntry;
	num_used++;
}

// remove item from the back of the container
template<class ItemType>
void Sequence<ItemType>::pop_back(ItemType& anEntry) {
	num_used--;
}



/*
template<class ItemType>
ItemType& Sequence<ItemType>::At(int i) {

}

*/



// create new size
template <class ItemType>
void Sequence<ItemType>::resize(int newSize) {}



template <class ItemType>
void Sequence<ItemType>::insert(int i, const ItemType& anEntry) {}


// Deconstructor - free the memory after the program executed
template<class ItemType>
Sequence<ItemType>:: ~Sequence() {
	delete[] myarray; // free the memory
}