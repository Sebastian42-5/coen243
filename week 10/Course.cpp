#include "Course.h"
#include <iostream>

Course::Course(std::string code, int capacity)
    : code(code), capacity(capacity > 0 ? capacity : 0) {}

std::string Course::getCode() const {
    return code;
}

bool Course::enroll(Student student) {
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        if (students[i].getId() == student.getId()) {
            std::cout << "Already enrolled in " << code << ".\n";
            return false;
        }
    }
    if (students.size() >= static_cast<std::size_t>(capacity)) {
        std::cout << code << " is full.\n";
        return false;
    }
    students.push_back(student);
    std::cout << "Enrolled " << student.getName()
              << " in " << code << ".\n";
    return true;
}

bool Course::drop(int studentId) {
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        if (students[i].getId() == studentId) {
            std::cout << "Dropped " << students[i].getName()
                      << " from " << code << ".\n";
            students.erase(students.begin() + i);
            return true;
        }
    }
    std::cout << "Student not enrolled in " << code << ".\n";
    return false;
}

void Course::printRoster() const {
    std::cout << "\n" << code << " (" << students.size()
              << "/" << capacity << " seats filled)\n";
    if (students.empty()) {
        std::cout << "  No students enrolled.\n";
    }
    for (int i = 0; i < static_cast<int>(students.size()); i++) {
        std::cout << "  " << students[i].getId() << " - "
                  << students[i].getName() << "\n";
    }
}
