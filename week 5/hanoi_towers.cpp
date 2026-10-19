#include <iostream>

using namespace std;

void moveTileToDisk(int (&disk1)[3], int (&disk2)[3]);

int main(){

    int disk_1[3] = {3, 2, 1};
    int disk_2[3] = {0, 0, 0};
    int disk_3[3] = {0, 0, 0};

    for(int i = 0; i < size(disk_1); i++){
        cout << disk_1[i] ;
    }
    cout << endl;
    for(int i = 0; i < size(disk_2); i++){
        cout << disk_2[i] ;
    }
    cout << endl;
     for(int i = 0; i < size(disk_2); i++){
        cout << disk_3[i] ;
    }
    cout << endl;

    moveTileToDisk(disk_1, disk_2);
    // moveTileToDisk(disk_2, disk_3);

    for(int i = 0; i < size(disk_1); i++){
        cout << disk_1[i] ;
    }
    cout << endl;
    for(int i = 0; i < size(disk_2); i++){
        cout << disk_2[i] ;
    }
    cout << endl;
     for(int i = 0; i < size(disk_3); i++){
        cout << disk_3[i] ;
    }
    cout << endl;

    return 0;

}

int findTopElementIndex(int (&disk)[3]){
    int top_disk_index;
    for(int i = size(disk); i >= 0; i--){
        if(disk[i] > 0){
            top_disk_index = i;
        }
    }
    return top_disk_index;
}


void moveTileToDisk(int (&disk1)[3], int (&disk2)[3]){
    int top_disk1_index = findTopElementIndex(disk1);
    int top_disk2_index = findTopElementIndex(disk2);

    cout << top_disk1_index << endl;
    cout << top_disk2_index << endl;

    disk2[top_disk2_index] = disk1[top_disk1_index];
    disk1[top_disk1_index] = 0;
}