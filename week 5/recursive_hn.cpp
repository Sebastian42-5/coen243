#include <iostream>
using namespace std;

void hanoi(int n, int s, int i, int f){
    static int move_count;
    if(n == 1){
        cout<<s<<"->"<<f<<endl;
        cout << move_count << endl;
        return;
    }
    hanoi(n-1, s, f, i);
    move_count++;
    cout<<s<<"->"<<f<<endl;
    hanoi(n-1, i, s, f);
    move_count++;
}

int main(){
    int n = 4;
    hanoi(n, 1, 2, 3);
    return 0;
}