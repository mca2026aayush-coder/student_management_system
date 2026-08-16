#pragma once
#include <string>

// Implemented Abstraction
class Person {
private:
    int id;
    std::string name;

public:
    Person(int id, std::string name) : id(id), name(name) {}
    virtual ~Person() {}

    // Implemented Encapsulation
    int getId() const { return id; }
    std::string getName() const { return name; }

    void setId(int id) { this->id = id; }
    void setName(std::string name) { this->name = name; }

    virtual void showRole() = 0;
};
