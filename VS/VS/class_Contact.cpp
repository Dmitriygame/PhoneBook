#include "class_Contact.h"

Contact::Contact() {}

Contact::Contact(int tmp_id, std::string tmp_name, std::string tmp_num) {
	this->id = tmp_id;
	this->name = tmp_name;
	this->number = tmp_num;
}

Contact::~Contact() {}

std::string Contact::get_number() {
	return this->number;
}

std::string Contact::get_name() {
	return this->name;
}
