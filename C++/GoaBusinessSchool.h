#pragma once
#include <string>
#include <iostream>
#include "Program.h"

class GoaBusinessSchool {
public:
    int id;
    std::string name;

    GoaBusinessSchool(int id, std::string name) : id(id), name(name) {}

    void offerProgram(const Program& p) {
        std::cout << name << " offers " << p.name << std::endl;
    }
};
