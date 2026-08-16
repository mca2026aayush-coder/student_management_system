#pragma once
#include <string>
#include <iostream>

class Result {
public:
    int resultId;
    std::string grade;

    Result(int resultId, std::string grade) : resultId(resultId), grade(grade) {}

    void displayResult() {
        std::cout << "Grade: " << grade << std::endl;
    }
};
