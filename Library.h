#ifndef LIBRARY_H
#define LIBRARY_H

#include<string>
#include<Book.h>
using namespace std;

class Library{
public:
Library quantity[10];
Library();
Library(std::string Lname);
std::string name;
std::string borrow_book_name;
void treat(int borrow_books_quantity);
~Library();
};
#endif