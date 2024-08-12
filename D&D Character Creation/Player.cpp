#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <cfloat>
#include <random>
#include <algorithm>
#include "Util.cpp"
#include "Class.cpp"
#include "Race.cpp"
#include "Background.cpp"
using namespace std;

class Player{
    public:
        int strength, constitution, dexterity, intelligence, wisdom, charisma;
        Class Class;
        background background;
        race race;
        string name;
};

int numChecker(vector<int> stats){
    int stat;
    bool checker = false;
    while(checker == false){
        cin >> stat;
        if(find(stats.begin(), stats.end(), stat) != stats.end()){
            checker = true;
        }
        else{
            cout << "Invalid input. Please try again. ";
        }
    }
    return stat;
}

vector<int> attributeGenerate(){
    random_device rand;  
    mt19937 gen(rand());  
    uniform_int_distribution<>dis(1, 6);  
    vector<int> stats;
    int d1, d2, d3, d4, last;
    for(int i = 0; i < 6; i++){
        d1 = dis(gen);
        d2 = dis(gen);
        d3 = dis(gen);
        d4 = dis(gen);
        last = d1 + d2 + d3 + d4 - min(min(d1, d2), min(d3, d4));
        stats.push_back(last);
    }
    return stats;
}

Player createCharacter(){
    Player character;
    vector<int> stats;
    vector<string> classes {"warlock", "Warlock", "wizard", "Wizard", "sorceror", "Sorceror",
                "barbarian", "Barbarian", "paladin", "Paladin", "druid", "Druid", "ranger", "Ranger", "fighter", "Fighter",
                "rogue", "Rogue", "cleric", "Cleric", "monk", "Monk", "bard", "Bard"};
    int strength, constitution, dexterity, intelligence, wisdom, charisma;
    vector<string> atttributes {"Strength", "Constitution", "Dexterity", "Intelligence", "Wisdom", "Charisma"};
    string name;
    string class1;
    string race;
    string background;
    cout << "Welcome to Dungeons and Dragons Character Creation!" << endl;
    char check;
    bool namecheck = false;
    bool done = false;
    while(done == false){
        while(namecheck == false){
            cout << "Please name your character: ";
            cin >> name;
            cout << "Your character will be named " << name << endl;
            cout << "Is that correct? y/n ";
            cin >> check;
            if(check == 'y' || check == 'Y'){
                namecheck = true;
            }
        }
        cout << "List of Classes:" << endl;
        for(int i = 1; i < classes.size(); i++){
            cout << classes[i] << endl;
            i++;
        }
        cout << "What class will your character be? ";
        namecheck = false;
        while(namecheck == false){
            cin >> class1;
            if(find(classes.begin(), classes.end(), class1) != classes.end()){
                namecheck = true;
            }
            else{
                cout << "Invalid input. Please try again. ";
            }
        }
       cout << "Time for your attributes!" << endl;
       stats = attributeGenerate();
       for(int i = 0; i < 6; i++){
        cout << stats[i] << endl;
       }
       cout << "These are the generated numbers for your stats" << endl;
       cout << "What shall be your Strength stat? ";
       strength = numChecker(stats);
       stats.erase(remove(stats.begin(), stats.end(), strength));
       cout << "Strength: " << strength << endl;
       for(int i = 0; i < stats.size(); i++){
        cout << stats[i] << endl;
       }
       cout << "What shall be your Constitution stat? ";
       constitution = numChecker(stats);
       stats.erase(remove(stats.begin(), stats.end(), constitution));
       cout << "Constitution: " << constitution << endl;
       for(int i = 0; i < stats.size(); i++){
        cout << stats[i] << endl;
       }
       done = true;
    }
    return character;
}