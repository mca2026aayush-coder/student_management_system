#pragma once
#include <string>

class Course {
public:
    int id;
    std::string name;
    int credits;

    Course(int id, std::string name, int credits)
        : id(id), name(name), credits(credits) {}
};
