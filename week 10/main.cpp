#include "Student.h"
#include "Course.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<Student> students = {
        Student(1001, "Amina"), Student(1002, "Youssef"),
        Student(1003, "Sara")
    };
    std::vector<Course> courses = {
        Course("COEN243", 2), Course("COEN330", 1)
    };

    int choice;
    while (true) {
        std::cout << "\nUniversity Course Registration\n"
                  << "1. List students and courses\n"
                  << "2. Enroll student\n"
                  << "3. Drop student\n"
                  << "4. Show course rosters\n"
                  << "0. Exit\nChoice: ";

        if (!(std::cin >> choice) || choice == 0) break;

        if (choice == 1) {
            std::cout << "Students:\n";
            for (int i = 0; i < static_cast<int>(students.size()); i++)
                std::cout << "  " << students[i].getId() << " - " << students[i].getName() << "\n";
            std::cout << "Courses:\n";
            for (int i = 0; i < static_cast<int>(courses.size()); i++)
                std::cout << "  " << courses[i].getCode() << "\n";
        } else if (choice == 4) {
            for (int i = 0; i < static_cast<int>(courses.size()); i++) courses[i].printRoster();
        } else if (choice == 2 || choice == 3) {
            int studentId;
            std::string courseCode;
            std::cout << "Student ID: ";
            if (!(std::cin >> studentId)) break;
            std::cout << "Course code: ";
            if (!(std::cin >> courseCode)) break;

            int courseIndex = -1;
            for (int i = 0; i < static_cast<int>(courses.size()); i++)
                if (courses[i].getCode() == courseCode) courseIndex = i;

            if (courseIndex == -1) {
                std::cout << "Unknown course.\n";
                continue;
            }

            if (choice == 3) {
                courses[courseIndex].drop(studentId);
            } else {
                int studentIndex = -1;
                for (int i = 0; i < static_cast<int>(students.size()); i++) {
                    if (students[i].getId() == studentId) studentIndex = i;
                }
                if (studentIndex == -1)
                    std::cout << "Unknown student.\n";
                else
                    courses[courseIndex].enroll(students[studentIndex]);
            }
        } else {
            std::cout << "Invalid menu choice.\n";
        }
    }
    std::cout << "Goodbye!\n";
}
