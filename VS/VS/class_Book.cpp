#include "class_Book.h"

Book::Book() {
	this->last_id = 0;
}

Book::~Book() {}

int Book::get_id(Contact& contact) {
	return contact.id;
}

void Book::set_number(Contact& contact, std::string tmp_num) {
	contact.number = tmp_num;
}

std::string Book::get_number(Contact& contact) {
	return contact.number;
}

int Book::get_last_id() {
	return this->last_id;
}

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
	for (int i = 1; i <= Book::quantity(); i++) {
		*ptr = book.get_obj(i - 1);		//in process...
		cout << i << "\t" << ptr->get_name() << "\t\t" << ptr->get_number();//in process...
		cout << endl;//in process...
	}
	return result;
}

Contact Book::get_obj(int tmp_id) {
	return ptrLog[tmp_id];
}
/*
void Book::clear_ptrLog() {
	Contact* ptr;
	for (int i = 0; i <= last_id; i++) {
		*ptr = ptrLog[i];
		delete ptr;
	}
}
*/