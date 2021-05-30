#pragma once
#include "class_Contact.h"
#include <vector>

class Book {
public:
	Book();
	~Book();
	int get_id(Contact& contact);
	void set_number(Contact& contact, std::string tmp_num);
	std::string get_number(Contact& contact);
	int get_last_id();
	void set_last_id();
	void add_ptrlog(Contact* tmp_ptr);
	void remove_from_ptrLog(int value);
	int quantity();
	std::string search(std::string value);
	Contact get_obj(int tmp_id);

//	void clear_ptrLog();
	
private:
	int last_id;
	std::vector<Contact> ptrLog;
};
