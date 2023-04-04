#ifndef BOOK_H
#define BOOK_H

#include<string>


Class Book{
    public:
    Book();
    Book(std::string Bname, std::string Bauthor);
    std::string name1;
    std::string name2;
    std::string name3;
    std::string name4;
    std::string name5;
    std::string borrow_time;
    std::string return_time;
    void treat(int borrow_time);
    ~BOOK_H
};
#endif//BOOK_H