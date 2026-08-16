#pragma once
#include <string>
#include <iostream>
#include "Person.h"
#include "Course.h"

// Implemented Inheritance
class Faculty : public Person {
private:
    std::string email;

public:
    Faculty(int id, std::string name, std::string email)
        : Person(id, name), email(email) {}

    void showRole() override {
        std::cout << getName() << " is a Faculty" << std::endl;
    }

    void teachCourse(const Course& c) {
        std::cout << getName() << " teaches " << c.name << std::endl;
    }
};
