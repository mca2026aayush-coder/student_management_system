#pragma once
#include <string>
#include <iostream>

class Exam {
public:
    std::string examName;

    Exam(std::string examName) : examName(examName) {}

    void conductExam() {
        std::cout << examName << " Exam Conducted" << std::endl;
    }
};
