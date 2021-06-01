#include "class_Book.h"

Book::Book() {
	this->last_id = 0;
}

Book::~Book() {}

void Book::set_last_id() {
	this->last_id++;
}

void Book::add_ptrlog(Contact* tmp_ptr) {
	ptrLog.push_back(*tmp_ptr);
}

void Book::remove_from_ptrLog(int value) {
	ptrLog.erase(ptrLog.begin() + value);
}

int Book::quantity() {
	return this->ptrLog.size();
}

std::string Book::search(std::string value) {
	std::string result;
	if (Book::quantity() > 0) {
	
		for (int i = 0; i < Book::quantity(); i++) {
			Contact* ptr;
			ptr = new Contact;
			*ptr = get_obj(i);
			if (( ptr->get_name() == value) || ( ptr->get_number() == value)) {
				result = "    " + ptr->get_name() + "    " + ptr->get_number();
				break;
			}
			else {
				result = "Nothing was found";
			}
			delete ptr;
		}
		
	}
	else {
		result = "Your contacts list is empty";
	}
	return result;
}

Contact Book::get_obj(int tmp_id) {
	return ptrLog[tmp_id];
}
