#include <iostream>
#include<string>
#include "Sequence.h"
using namespace std;

int main() {

	string checkElement, 
		  user_input;

	int   element = 0, 
		   menu;
	char quitProgram;


	int index;
	string item;
	
	bool prompt = true;
	Sequence<string>mySequence;
	//print = mySequence.back();





	cout << "*******************************\n";
	cout << " 1 - Add to Sequence container \n";
	cout << " 2 - Check if Sequence container is Empty.\n";
	cout << " 3 - Check if Sequence container is Full.\n";
	cout << " 4 - Check the capacity of Sequence container.\n";
	cout << " 5 - Check the number of element within Sequence container \n";
	cout << " 6 - Check the font elment within sequence container.\n";
	cout << " 7 - Check the back element within sequence container.\n";
	cout << " 9 - Pop or remove at  the end of the container Sequence.\n";
	cout << " 10 - At - returns a reference at an entry positon.\n";
	cout << " 11 - Resize the container. \n";
	cout << " 12 - Insert a new value to the container.\n";
	cout << endl;
	cout << "********************************************* " << endl;

	cout << endl;

	
		
	

	while (prompt) {

		cout << " Select  from the Menu:";
		cin >> menu;

		switch (menu)
		{

		case 1:
			cout << "Enter a value to add to the " << endl;
			cin >> user_input;
			mySequence.push_back(user_input);
			break;

		case 2:
			if (mySequence.isEmpty()) {
				cout << "The Container is empty" << endl;
			}
			else {
				cout << "The Container is not empty" << endl;
			}
			break;
							   

		case 3 :

			if (!mySequence.isFull()) {
				cout << "The Container is not full " << endl;
			}
			else {
				cout << " The Container is Full" << endl;
			}
			break;

		case 4:
			cout << "The capacity of the coninter is: " << mySequence.Arraycapacity()<< endl;
			break;

		case 5:
			cout << "The total numbers of elements is: " << mySequence.numOfElement() << endl;
			break;

		case 6:
			cout << " The font element is: " << mySequence.font() << endl;
			break;

		case 7:
		;
			cout << " The back element is: " << mySequence.back() << endl;

		case 9:
			 mySequence.pop_back(user_input);
			 cout << " The element has been pop: " << checkElement << endl;
			

		case 10:
			cout << mySequence.At(element) << endl;
			cout << endl;
			break;
		

		case 11:
			int new_size;
			cout << "Enter a new size" << endl;
			cin >> new_size;
			 mySequence.resize(new_size);
			break;

		case 12:
			cout << "Enter an Index and an Item to insert into the container" << endl;
			cin >> index >> item;
			mySequence.insert(index, item);
			break;

		default:
			cout << " Enter Y/N to quit the program" << endl;
			cin >> quitProgram;

			if (quitProgram == 'Y' || quitProgram == 'y') {
				prompt = false;
			}
			else {
				prompt = true;
			}
			break;
		}
	 }



	system("pause");
	return 0;
}



/*



*******************************
1 - Add to Sequence container
2 - Check if Sequence container is Empty.
3 - Check if Sequence container is Full.
4 - Check the capacity of Sequence container.
5 - Check the number of element within Sequence container
6 - Check the font elment within sequence container.
7 - Check the back element within sequence container.
9 - Pop or remove at  the end of the container Sequence.
10 - At - returns a reference at an entry positon.
11 - Resize the container.
12 - Insert a new value to the container.

*********************************************

Select  from the Menu:1
Enter a value to add to the
orange
Select  from the Menu:1
Enter a value to add to the
banana
Select  from the Menu:1
Enter a value to add to the
peach
Select  from the Menu:2
The Container is not empty
Select  from the Menu:3
The Container is not full
Select  from the Menu:4
The capacity of the coninter is: 3
Select  from the Menu:4
The capacity of the coninter is: 3
Select  from the Menu:5
The total numbers of elements is: 3
Select  from the Menu:6
The font element is: orange
Select  from the Menu:7
The back element is: peach
The element has been pop:
orange
*/