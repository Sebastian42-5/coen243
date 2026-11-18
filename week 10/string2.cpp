#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 = "ccaabbaa";
    string s2 = "aa";

    int a = s1.find(s2); // returns 2
    int b = s1.rfind(s2); // returns 6

    cout << a << endl;
    cout << b << endl;

}