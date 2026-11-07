#include <iostream>
#include <array>
#include <string>

using namespace std;

 struct Employee{
        int id;
        string name;
        int salary;
    };

struct Employee validateSalary(struct Employee e, int s){
    s = (s > 0) ? s : 0;
    return e;
}

class Worker{
    public:
        Worker();
        void setSalary(double x){
            salary = x;
        }
    private:
        string name;
        double salary;
        string department;
};


int main(){
    int s = -2000;
    Employee bob = {1, "Bob", s};
    validateSalary(bob, s);
    bob.salary = 0;
    cout << bob.salary << endl;

    // Worker oscar;

    // oscar.setSalary(10000);

}

