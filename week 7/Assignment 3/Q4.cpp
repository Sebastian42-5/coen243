#include <iostream>
#include <string>

using namespace std;

bool isAPalindrome(string s);

int main(){
    string s = "racecar";
    bool isPalindrome = isAPalindrome(s);
    cout << isPalindrome << endl;
}

bool isAPalindrome(string s){
    bool isPalindrome = false;

    int left_index = 0;
    int right_index = s.size() - 1;
    
    if(s[left_index] == s[right_index]){
        isPalindrome = true;
    }
    if(right_index == 0){
        return isPalindrome;
    }

    return isAPalindrome(s.substr(left_index + 1, right_index - 1));
}


