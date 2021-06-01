#pragma once
#include <string>

class Contact {
public:
	Contact();
	Contact(std::string tmp_name, std::string tmp_num);
	~Contact();
	std::string get_number();
	std::string get_name();

private:
	std::string number, name;
};
