#include <iostream>

using namespace std;

int x = 1;

void staticLocal();


void staticLocal() {
    static int x = 5; // this is initialized only once and prevents it from being modified outside the function. If it gets incremented
    // the value is kept through function calls. 

    x += 1;

    cout << x << endl;
}




int main() {

    for(int i = 0; i <= 4; i++){
        staticLocal();
    }
    
    { // this is an new scope. This x is destroyed when the block ends. 
        int x = 7;
        cout << x << endl;
    }

    return 0;
}

// inner to outer scope 

// when we define a function, we define a new scope

// use global vs use local scope







