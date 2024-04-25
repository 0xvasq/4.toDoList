#include <iostream>

namespace using std;


const int M = 50;


class items {
	string listName[M];

public:
	void displayMessage(void);
	
};


void items::displayMessage(void) {

	cout << "" << endl;
};

int main(

	do {
		cout << "Thias is a simple to do list, please look at the options and select one" << endl;
		cout << "Option 1: Enter new items!" << endl;
		cout << "Option 2: Remove an item!" << endl;
		cout << "Option 3: Display List!" << endl;
		cout << "Option 4: exit"
		cin >> a;

		int a; 

		switch (a) {
		case 1:;
			break;
		}
	} while (a != 4)
);