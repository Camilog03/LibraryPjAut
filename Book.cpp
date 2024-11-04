//
// Created by gilju on 3/11/2024.
//

#include "Book.h"


Book::Book(std::string title, std::string author, Date datePublish, Date acquisitionDate, int isbn) : _title(title)
,_author(author), _datePublish(datePublish), _acquisitonDate(acquisitionDate), _isbn(isbn), _available(true){}

Book::~Book() = default;

void Book::checkOut() {
    _available = false;
    std::cout << "Now the book IS NOT available ❌" << std::endl;
}

void Book::returnBook() {
    _available = true;
    std::cout << "Now the book IS available ✅" << std::endl;

}

void Book::displayInfo() {

    std::cout
    << "\nTitle: " << _title
    << "\nAuthor: " << _author
    << "\nPublication Date: " << _datePublish.day << '/' << _datePublish.month << '/' << _datePublish.year
    << "\nIsbn Code: "<< _isbn
    << "\nAcquisition Date: " << _acquisitonDate.day << '/' << _acquisitonDate.month << '/' << _acquisitonDate.year
    << "\nAvailable: " << (_available ? '✅':'❌') << std::endl;
}
