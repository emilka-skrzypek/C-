#include "Book.h"

Book::Book() : title("Unknown"), author("Unknown"), isbn("000-0000000000"), isLoaned(false) {}

Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
        : title(title), author(author), isbn(isbn), isLoaned(false) {}

Book::~Book() {}

void Book::setTitle(const std::string& title) {
    this->title = title;
}

std::string Book::getTitle() const {
    return title;
}

void Book::setAuthor(const std::string& author) {
    this->author = author;
}

std::string Book::getAuthor() const {
    return author;
}

void Book::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

std::string Book::getISBN() const {
    return isbn;
}

void Book::setBorrowedStatus(bool status) {
    isLoaned = status;
}

bool Book::getBorrowedStatus() const {
    return isLoaned;
}

void Book::displayInfo() const {
    std::cout << "Tytul: " << title << "\nAutor: " << author << "\nISBN: " << isbn
              << "\nStatus wypozyczenia: " << (isLoaned ? "Wypozyczona" : "Dostepna") << std::endl;
}
