#include <iostream>
#include <cstdlib>

#include "class_Book.h"
#include "class_Contact.h"

using namespace std;

Book book;

bool output = false;
int input;
int value;
string value1, value2;

Contact* ptr;


int main() {

	while (output == false) {
		cout << "\n\tPhone Book\n\n";
		cout << "1. Create new contact\n";
		cout << "2. Delete contact\n";
		cout << "3. Search\n";
		cout << "4. Exit\n\n";

		if (book.quantity() == 0) {
			cout << "Your contacts list is empty\n\n";
		}

		else {
			for (int i = 1; i <= book.quantity(); i++) {
				*ptr = book.get_obj(i-1);
				cout << i << "\t" << ptr->get_name() << "\t\t" << ptr->get_number();
				cout << endl;
			}
			cout << "\n\n";
		}

		cin >> input;

		switch (input) {
			case 1: {
				system("cls");
				cout << "Input name: ";
				cin >> value1;
				cout << "Input number: ";
				cin >> value2;
				book.set_last_id();
				ptr = new Contact(book.get_last_id(), value1, value2);
				book.add_ptrlog(ptr);
				break;
			}
			case 2: {
				cout << "Input contact number: ";
				cin >> value;
				book.remove_from_ptrLog(value-1);
				break;
			}
			case 3: {
				// in process...
				break;
			}
			case 4: {
				output = true;
				break;
			}
		}

		system("cls");

	}
	delete ptr;
//	book.clear_ptrLog();
	return 0;
}
