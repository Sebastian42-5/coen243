#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1(8, 'x');
    string s2;

    string s3 = "good";

    s1 += "pet";

    s2.assign(s1);

    cout << s1.length() << endl;
    cout << s2.length() << endl;

    cout << s1.at(8) << endl;
    cout << s2.at(2) << endl;

    s3.append(s1, 0, s1.length());

    cout << s3 << endl;

    string s4 = "S";

    string s5 = "U";

    cout << s5.compare(s4) << endl; // U > S greater than is 1
    cout << s4.compare(s5) << endl; // S < U less than is -1

    s4.resize(s4.length() + 9);

    cout << s4 << endl;
}

// s1.assign(s2, start, number_of_characters)

// .at can be better than [] for debugging because it can cause an out of range error

// s1.compare(s2) compares the lexicography of two strings. For example, "C" would be higher than "B"
// returns 1 if greater than, returns 0 if equal, returns -1 if less than

// s1.compare(start, length, s2, start, length)

// s1.substr(start, n)

// s1.swap(s2) s1 becomes s2 and s2 becomes s1

// s1.capacity() number of elements that can be stored without reallocation

// s1.max_size() maximum possible string size

// s1.empty() true if empty

// s1.resize(newlength) resizes string to new length

// boolalpha makes it such that true outputs as string true instead of 1 and false instead of 0

// string::npos indicator for not found and it's a size_t -1 

// s1.find(s2) finds the index where a substring is found in a string. If it is not found, it returns npos

// s1.rfind(s2) searches from right to left 

// s1.find_first_of(s2) finds the first instance of any of the characters of s2 in s1

// s1.last_of(s2) last insrance of a character of s2 in s1

// s1.find_first_not_of(s2) first instance of a character in s2 not in s1

// s1.find_last_not_of(s2) last instance of a character in s2 not in s1

// s1.erase() erase all characters of a string

// s1.erase(pos, n) erases n characters from a string startign at position pos

// s1.insert(pos, n, character) inserts n characters in string s1 at position pos

// s1.insert(pos, str) inserts str at pos

// strcpy(s1, s2) copy
// strcmp(s1, s2) compare
// strlen(s) length of the string excluding the null character






