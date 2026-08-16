#pragma once
#include <string>
#include <iostream>
#include "Course.h"

class Program {
public:
    int id;
    std::string name;

    Program(int id, std::string name) : id(id), name(name) {}

    void addCourse(const Course& c) {
        std::cout << c.name << " added to " << name << std::endl;
    }
};
