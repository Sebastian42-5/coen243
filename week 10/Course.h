#ifndef COURSE_H
#define COURSE_H

#include "Student.h"
#include <string>
#include <vector>

class Course {
private:
    std::string code;
    int capacity;
    std::vector<Student> students;

public:
    Course(std::string code, int capacity);
    std::string getCode() const;
    bool enroll(Student student);
    bool drop(int studentId);
    void printRoster() const;
};

#endif
