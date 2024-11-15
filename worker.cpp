#include "Worker.h"
#include <iostream>

Worker::Worker() : Human(), position("Unknown"), salary(0.0), workHours(0) {}

Worker::Worker(const std::string& name, int age, const std::string& role, const std::string& position, double salary, int workHours)
        : Human(name, age, role), position(position), salary(salary), workHours(workHours) {}

void Worker::setPosition(const std::string& position) {
    this->position = position;
}

std::string Worker::getPosition() const {
    return position;
}

void Worker::setSalary(double salary) {
    this->salary = salary;
}

double Worker::getSalary() const {
    return salary;
}

void Worker::setWorkHours(int workHours) {
    this->workHours = workHours;
}

int Worker::getWorkHours() const {
    return workHours;
}

void Worker::displayInfo() const {
    Human::displayInfo();
    std::cout << "Stanowisko: " << position << "\nWynagrodzenie: " << salary
              << "\nGodziny pracy w tygodniu: " << workHours << std::endl;
}

//dziedziczenie z Human: name, age, role, z Book: isLoaned (ponieważ Human dziedziczy isLoaned)