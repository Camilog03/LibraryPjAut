//
// Created by gilju on 3/11/2024.
//

#ifndef BOOK_H
#define BOOK_H
#include <iostream>

struct Date {

    int day;
    int month;
    int year;

};


class Book {

private:
    std::string _title;
    std::string _author;
    Date _datePublish;
    Date _acquisitonDate;
    int _isbn;
    bool _available;

public:

    Book(std::string title, std::string author, Date datePublish, Date acquisitionDate, int isbn);
    ~Book();

    void checkOut();
    void returnBook();

    void displayInfo();


};



#endif //BOOK_H
