#pragma once
#include <string>
#include <iostream>
#include "Person.h"
#include "Program.h"

// Implemented Inheritance
class Student : public Person {
private:
    std::string address;
    std::string phone;

public:
    Student(int id, std::string name, std::string address, std::string phone)
        : Person(id, name), address(address), phone(phone) {}

    std::string getAddress() const {
        return address;
    }

    std::string getPhone() const {
        return phone;
    }

    void setAddress(std::string address) {
        this->address = address;
    }

    void setPhone(std::string phone) {
        this->phone = phone;
    }

    void showRole() override {
        std::cout << getName() << " is a Student" << std::endl;
    }

    void enroll(const Program& p) {
        std::cout << getName() << " enrolled in " << p.name << std::endl;
    }
};
