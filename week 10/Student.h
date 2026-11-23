#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;
    std::string name;

public:
    Student(int id, std::string name);
    int getId() const;
    std::string getName() const;
};

#endif
