#include "class_Book.h"

Book::Book() {}

Book::~Book() {}

int Book::get_id(Contact &contact) {
	return contact.id;
}