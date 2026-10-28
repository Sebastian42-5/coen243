#include <iostream>
#include <vector>

using namespace std;

vector<int> getGradeList();

vector<int> findFourHighestGrades(vector<int> grades);

vector<int> findFourLowestGrades(vector<int> grades);

int findAverageGrade(vector<int> grades);

int findMedianGrade(vector<int> grades);

int findNumberOfAGrades(vector<int> grades);

int findNumberOfBGrades(vector<int> grades);

int findNumberOfCGrades(vector<int> grades);

int findNumberOfDGrades(vector<int> grades);

int findNumberOfFGrades(vector<int> grades);



int main(){
    vector<int> grades = getGradeList();

    vector<int> four_highest_grades = findFourHighestGrades(grades);

    for(int i = 0; i <= four_highest_grades.size(); i++){
        cout << "four highest grades: " << four_highest_grades[i] << " ";
    }
    cout << endl;

    vector<int> four_lowest_grades = findFourLowestGrades(grades);

    for(int i = 0; i <= four_lowest_grades.size(); i++){
        cout << "four lowest grades: " << four_lowest_grades[i] << " ";
    }
    cout << endl;

    cout << "Average grade is: " << findAverageGrade(grades) << endl;
    cout << "Median grade is: " << findMedianGrade(grades) << endl;

    cout << "Number of A grades: " << findNumberOfAGrades(grades) << endl;
    cout << "Number of B grades: " << findNumberOfBGrades(grades) << endl;
    cout << "Number of C grades: " << findNumberOfCGrades(grades) << endl;
    cout << "Number of D grades: " << findNumberOfDGrades(grades) << endl;
    cout << "Number of F grades: " << findNumberOfFGrades(grades) << endl;

}

vector<int> getGradeList(){
    vector<int> grades = {};
    int number_of_students;

    cout << "Enter the number of students: ";
    cin >> number_of_students;

    for(int i = 1; i <= number_of_students; i++){
        int grade;
        cout << "Enter grade for student" << i << ": ";
        cin >> grade;
        grades.push_back(grade);
    } 

    return grades;
}


vector<int> findFourHighestGrades(vector<int> grades){
    vector<int> four_highest_grades = {};
    int max_grade = 0;

    if(grades.size() <= 4){
        return grades;
    }

    for(int i = 1; i <= 4; i++){
        int highest_index;
        for(int j = 0; j < grades.size(); j++){
            int current_grade = grades[j];
            if(current_grade > max_grade){
                max_grade = current_grade;
                highest_index = j;
            }
        }
        four_highest_grades.push_back(max_grade);
        grades.erase(grades.begin() + highest_index);

    }
    
    return four_highest_grades;
}

vector<int> findFourLowestGrades(vector<int> grades){
    vector<int> four_lowest_grades = {};
    int min_grade = 999999;

    if(grades.size() <= 4){
        return grades;
    }

    for(int i = 1; i <= 4; i++){
        int lowest_index;
        int min_grade;
        for(int j = 0; j < grades.size(); j++){
            int current_grade = grades[j];
            if(current_grade < min_grade){
                min_grade = current_grade;
                lowest_index = j;
            }
        }
        four_lowest_grades.push_back(min_grade);
        grades.erase(grades.begin() + lowest_index);

    }
    
    return four_lowest_grades;
}

int findAverageGrade(vector<int> grades){
    int number_of_grades = grades.size();
    int total = 0;

    for(int i = 0; i <= number_of_grades; i++){
        total += grades[i];
    }

    return total / number_of_grades;
}

int findMedianGrade(vector<int> grades){
    int middle_index;
    int number_of_grades = grades.size();
    int median;
    if(number_of_grades == 1){
        return grades[0];
    }
    if(number_of_grades % 2 != 0){
        middle_index = number_of_grades / 2;
        median = grades[middle_index];
    } else if(number_of_grades % 2 == 0){
        int left_element_index = (number_of_grades / 2) - 1;
        int right_element_index = number_of_grades / 2;

        median = (grades[left_element_index] + grades[right_element_index]) / 2;
    }
    return median;
}

int findNumberOfAGrades(vector<int> grades){
    static int count = 0;
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] >= 90){
            count++;
        }
    }
    return count;
}

int findNumberOfBGrades(vector<int> grades){
    static int count = 0;
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] < 90 && grades[i] >= 80){
            count++;
        }
    }
    return count;
}

int findNumberOfCGrades(vector<int> grades){
    static int count = 0;
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] < 80 && grades[i] >= 65){
            count++;
        }
    }
    return count;
}

int findNumberOfDGrades(vector<int> grades){
    static int count = 0;
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] < 65 && grades[i] >= 50){
            count++;
        }
    }
    return count;
}

int findNumberOfFGrades(vector<int> grades){
    static int count = 0;
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] < 50){
            count++;
        }
    }
    return count;
}