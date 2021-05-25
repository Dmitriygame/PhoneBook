#include <iostream>
#include <cstdlib>

#include "class_Book.h"
#include "class_Contact.h"

int main() {

    Book book;
    std::string n;

    // https://www.cyberforum.ru/cpp-beginners/thread162678.html

    for (int i = 1; i <= 10; i++) {
        Contact contact(i);
        if (book.get_id(contact) == 3)
            contact.number = "33333";
        std::cout << book.get_id(contact) << "\t" << contact.number << std::endl;
        int io = 3;
    }

    /*
    for (int i = 1; i <= 10; i++) {
        std::cout << book.get_id(contact) << "\t" << contact.number << std::endl;
    }
    */
    

    
    system("pause");

    return 0;
}
