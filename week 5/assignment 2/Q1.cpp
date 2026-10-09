#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    char answer;

    cout << "---------------------------" << endl;
    cout << "Parking Lot Generator" << endl;
    cout << "---------------------------" << endl;

    cout << "What is your name? ";
    cin >> name;
    cout << endl;

    cout << "Welcome " << name << " to the parking lot generator" << endl;

    bool done_with_program = false;

    while(!(done_with_program)){

        static int parking_lot_count = 0;

        if(parking_lot_count == 0){
            cout << "Would you like to create a parking lot? (y/n): ";
        } else {
            cout << "Would you like to create another parking lot? (y/n): ";
        }

        cin >> answer;
        cout << endl;

        if(answer == 'y'){
            int attempt_count = 0;
            int number_of_rows;
            int number_of_parking_spaces_per_row;
            int total_parking_spaces;
            bool valid_answer = false;

            cout << "Enter the number of rows: ";
            cin >> number_of_rows;
            cout << endl;

            while(!(valid_answer)){
                cout << "Enter an even number of parking spaces per row (must be greater than 2): ";
                cin >> number_of_parking_spaces_per_row;
                cout << endl;

                if(number_of_parking_spaces_per_row < 2 || number_of_parking_spaces_per_row % 2 != 0){
                    cout << number_of_parking_spaces_per_row << " is not a valid number of parking spaces." << endl;
                    attempt_count++;
                    
                    if(attempt_count > 3){
                        cout << "It seems you are having trouble entering a valid number." << endl;
                        cout << "Program ends now." << endl;
                        break;
                    }
                } else {
                    valid_answer = true;
                }
            }

            if(attempt_count > 3){
                break;
            } else {
                for(int i = 0; i < number_of_rows; i++){
                    for(int j = 0; j < number_of_parking_spaces_per_row; j++){
                        cout << "|_| ";
                    }
                    cout << endl;
                }

                for(int i = 0; i < 4 * number_of_parking_spaces_per_row; i++){
                    cout << "-";
                }

                total_parking_spaces = number_of_rows * number_of_parking_spaces_per_row;
                cout << "Total parking spaces: " << total_parking_spaces << endl;
    
                parking_lot_count++;
            }

        } else if(answer == 'n') {
            cout << "Thank you" << name << ".You have created " << parking_lot_count << " parking lots." << endl;
            done_with_program = true;
        }
    }
}