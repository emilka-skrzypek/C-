#include "Human.h"
#include <iostream>

Human::Human() : name("Unknown"), age(0), role("Unspecified") {}

Human::Human(const std::string& name, int age, const std::string& role)
        : name(name), age(age), role(role) {}

void Human::setName(const std::string& name) {
    this->name = name;
}

std::string Human::getName() const {
    return name;
}

void Human::setAge(int age) {
    this->age = age;
}

int Human::getAge() const {
    return age;
}

void Human::setRole(const std::string& role) {
    this->role = role;
}

std::string Human::getRole() const {
    return role;
}

void Human::displayInfo() const {
    std::cout << "Imie: " << name << "\nWiek: " << age
              << "\nRola: " << role
              << "\nStatus wypozyczenia: " << (isLoaned ? "Wypozyczona" : "Dostepna") << std::endl;
}

//Dziedziczenie z Book: status wypozyczenia