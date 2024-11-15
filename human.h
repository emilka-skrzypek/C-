#ifndef HUMAN_H
#define HUMAN_H

#include "Book.h"
#include <string>

class Human : public Book {
protected:
    std::string name;
    int age;
    std::string role;

public:
    Human();
    Human(const std::string& name, int age, const std::string& role);

    void setName(const std::string& name);
    std::string getName() const;
    void setAge(int age);
    int getAge() const;
    void setRole(const std::string& role);
    std::string getRole() const;

    void displayInfo() const override;
};

#endif // HUMAN_H
