#include "Book.h"
#include "Human.h"
#include "Worker.h"
#include <iostream>

int main() {
    Book book("C++ Programming", "John Doe", "123-4567890123");
    std::cout << "Informacje o ksiazce:\n";
    book.displayInfo();
    std::cout << "\n";

    Human borrower("Anna Nowak", 25, "Wypozyczajacy");
    borrower.setBorrowedStatus(true);
    std::cout << "Informacje o czlowieku:\n";
    borrower.displayInfo();
    std::cout << "\n";

    Worker librarian("Jan Kowalski", 35, "Pracownik", "Bibliotekarz", 3000.0, 40);
    librarian.setBorrowedStatus(false);
    std::cout << "Informacje o pracowniku biblioteki:\n";
    librarian.displayInfo();

    return 0;
}
