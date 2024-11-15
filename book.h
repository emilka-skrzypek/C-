#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
protected:
    bool isLoaned;

private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book();
    Book(const std::string& title, const std::string& author, const std::string& isbn);
    virtual ~Book();

    void setTitle(const std::string& title);
    std::string getTitle() const;
    void setAuthor(const std::string& author);
    std::string getAuthor() const;
    void setISBN(const std::string& isbn);
    std::string getISBN() const;

    void setBorrowedStatus(bool status);
    bool getBorrowedStatus() const;

    virtual void displayInfo() const;
};

#endif // BOOK_H
