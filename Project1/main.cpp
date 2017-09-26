#include <iostream>
#include<string>
#include "Sequence.h"
using namespace std;

int main() {

	string name[] = { "Abe", "Layee", "Zola", "Solo" };
	Sequence<string> myContainer;

	for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
		cout << name[i] << " I am testing this out ok kiddo " << endl;
	}

	system("pause");
	return 0;
}
