#include "Student.h"

Student::Student(int id, std::string name)
    : id(id), name(name) {}

int Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}
