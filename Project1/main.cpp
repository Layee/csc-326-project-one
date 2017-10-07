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
			element = mySequence.Arraycapacity();
			cout << "The capacity of the coninter is: " << element << endl;
			break;

		case 5:

			element = mySequence.numOfElement();
			cout << "The total numbers of elements is: " << element << endl;
			break;

		case 6:
			checkElement = mySequence.font();
			cout << " The font element is: " << checkElement << endl;
			break;

		case 7:
			checkElement = mySequence.back();
			cout << " The back element is: " << checkElement << endl;

		//case 8:
		//	checkElement = mySequence.back();
		//	cout << " The back element is: " << checkElement;

		case 9:
			 mySequence.pop_back(user_input);
			 cout << " The element has been pop: " << checkElement << endl;
			

		case 10:
			cout << mySequence.At(element) << endl;
			cout << endl;
			break;
		

		default:
			break;
		}



		// End the Program based on the input
		/*cout << " Enter Y/N to quit the program" << endl;
		cin >> quitProgram;

		if (quitProgram == 'Y' || quitProgram == 'y') {
			prompt = false;
		}
		else {
			prompt = true;
		} */
	 }



	system("pause");
	return 0;
}
