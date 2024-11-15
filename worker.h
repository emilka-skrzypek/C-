#ifndef WORKER_H
#define WORKER_H

#include "Human.h"
#include <string>

class Worker : public Human {
private:
    std::string position;
    double salary;
    int workHours;

public:
    Worker();
    Worker(const std::string& name, int age, const std::string& role, const std::string& position, double salary, int workHours);

    void setPosition(const std::string& position);
    std::string getPosition() const;
    void setSalary(double salary);
    double getSalary() const;
    void setWorkHours(int workHours);
    int getWorkHours() const;

    void displayInfo() const override;
};

#endif // WORKER_H
