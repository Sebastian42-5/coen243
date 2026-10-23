#include <iostream>
#include <array>
#include <random>
#include <string>
#include <vector>

using namespace std;

vector<int> generateDiceAttacks(int guild_size){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1, 20);

    vector<int> dice_attacks = {};

    for(int i = 0; i < guild_size; ++i){
        int dice_roll = distrib(gen);
        dice_attacks.push_back(dice_roll);
    }

    return dice_attacks;
}



void printAttackPower(int guild_size, vector<int> &dice_attacks, array<string, 4> &guild_members){
    for(int i = 0; i < guild_size; ++i){
        if(dice_attacks[i] > 0 && dice_attacks[i] <= 5){
            cout << guild_members[i] << " rolled a " << dice_attacks[i] << " the enemy barely flinched" << endl;
        } else if(dice_attacks[i] > 5 && dice_attacks[i] <= 10){
            cout << guild_members[i] << " rolled a " << dice_attacks[i] << " the enemy has a small scratch" << endl;
        } else if(dice_attacks[i] > 10 && dice_attacks[i] <= 15){
            cout << guild_members[i] << " rolled a " << dice_attacks[i] << " the enemy has been wounded" << endl;
        } else if(dice_attacks[i] > 15 && dice_attacks[i] <= 20){
            cout << guild_members[i] << " rolled a " << dice_attacks[i] << " the enemy has been critically wounded" << endl;
        }
    }
}

int main(){
    int guild_size = 4;
    array<string, 4> guild_members = {"Gianluigi", "Fabio", "Sebastian", "Oscar"};

    vector<int> dice_attacks = generateDiceAttacks(guild_size);

    printAttackPower(guild_size, dice_attacks, guild_members);
}