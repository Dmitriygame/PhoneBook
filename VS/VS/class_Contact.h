#pragma once
#include <string>

class Contact {
public:
	Contact();
	Contact(int tmp_id, std::string tmp_name, std::string tmp_num);
	~Contact();
	int get_id();
	std::string get_number();
	std::string get_name();

	friend class Book;

private:
	int id;
	std::string number, name;

};
