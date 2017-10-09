#include "Sequence.h"
template<class ItemType>
Sequence<ItemType>::Sequence() {
	capacity = 10;
	myarray = new ItemType[capacity];
	num_used = 0;
	

}

template<class ItemType>
Sequence<ItemType>::Sequence(const ItemType& Size){
	capacity = Size;
	myarray = new ItemType[capacity];
	num_used = 0;
}


// check if the container is empty
template<class ItemType>
bool Sequence<ItemType>::isEmpty() {
	if (num_used == 0) {
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
	return num_used;
}

// Return a reference to the first items in the container
template<class ItemType>
ItemType& Sequence<ItemType>::font() {
	return myarray[0];
}

// Return a reference of the last item in the container
template<class ItemType>
ItemType& Sequence <ItemType>::back() {
	return myarray[num_used - 1];
	
}

// Push item of the back of the array
template <class ItemType>
void Sequence<ItemType>::push_back(const ItemType& anEntry) {
	myarray[num_used] = anEntry;
	num_used++;
	
}

// remove item from the back of the container
template<class ItemType>
void Sequence<ItemType>::pop_back(ItemType& anEntry) { 
	
		 anEntry = myarray[num_used - 1];
		 num_used--;
	
	
}




template<class ItemType>
ItemType& Sequence<ItemType>::At(int i) {
	if (i >= capacity && i < 0) {
		cout << "Out of bound" << endl;
	}
	 else
	 { 
		return myarray[i];

	}
}





// create new size
template <class ItemType>
void Sequence<ItemType>::resize(int newSize) {

	capacity = newSize;
	ItemType *resizeArry = new ItemType[newSize];

	for (int i = 0; i < capacity; i++) {

		resizeArry[i] = myarray[i];
	}

	myarray = resizeArry;
	delete[] resizeArry;
	resizeArry = nullptr;
       
}



template <class ItemType>
void Sequence<ItemType>::insert(int i, const ItemType& anEntry) {

	if (i < capacity) {
		myarray[i] = anEntry;
		num_used++;
	}

	else {
		cout << "No space to insert value into" << endl;
	}
}


// Deconstructor - free the memory after the program executed
template<class ItemType>
Sequence<ItemType>:: ~Sequence() {
	delete[] myarray; // free the memory
	myarray = nullptr;
}