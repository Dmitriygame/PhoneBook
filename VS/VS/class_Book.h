#pragma once
#include "class_Contact.h"
#include <vector>

class Book {
public:
	Book();
	~Book();
	void set_last_id();
	void add_ptrlog(Contact* tmp_ptr);
	void remove_from_ptrLog(int value);
	int quantity();
	std::string search(std::string value);
	Contact get_obj(int tmp_id);
	
private:
	int last_id;
	std::vector<Contact> ptrLog;
};
