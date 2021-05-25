#pragma once
#include <string>

class Contact {
public:
	Contact();
	Contact(int tmp_id);
	~Contact();
	int get_id();
	std::string get_number();
	std::string get_name();

	friend class Book;

	std::string number = "11111";	//!!!
private:
	int id;
	std::string /*number="11111",*/ name;	//!!!
};

