#include <iostream>
#include <string>

using namespace std;

string code_list[5] = {"a", "b", "c", "d", "e"};

int main() {
    string number_string;
    int number;
    cout << "Enter your number: " << endl;
    getline(cin, number_string);
    number = stoi(number_string);
    for(int i = 0; i < number; i++){
        cout << "First number:" << i + 1 << " " << code_list[i] << endl;
    }
    return 0;
}