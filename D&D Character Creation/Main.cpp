#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <cfloat>
#include <random>
#include <algorithm>
#include "Player.cpp"
using namespace std;

int main(){
    vector<Player> characters;
    char Word[100];
    int returnV;
    cout << "Welcome to Dungeons and Dragons Character Manager!" << endl;
    while (1){
        cout << "\nOptions: " << endl;
        cout << "CreateCharacter" << endl;
        cout << "ViewCharacter" << endl;
        cout << "Stop" << endl;
        cout << "Please Choose an Option: ";
        returnV = nextInstruction(Word);

        if(returnV == 0){
            cout << "Warning: Invalid Instruction\n";
            continue;
        }

        if(strcmp(Word,"Stop") == 0){
            return 0;
        }

        if(strcmp(Word,"CreateCharacter") == 0){
            characters.push_back(createCharacter());
            continue;
        }

        if(strcmp(Word, "ViewCharacter") == 0){
            for(int i = 0; i < characters.size(); i++){
                characters[i].printStats();
                cout << endl;
            }
        }
    }
    return 1;
}