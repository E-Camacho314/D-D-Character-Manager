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

vector<string> classes {"warlock", "Warlock", "wizard", "Wizard", "sorceror", "Sorceror",
                "barbarian", "Barbarian", "paladin", "Paladin", "druid", "Druid", "ranger", "Ranger", "fighter", "Fighter",
                "rogue", "Rogue", "cleric", "Cleric", "monk", "Monk", "bard", "Bard"};

vector<string> atttributes {"Strength", "Constitution", "Dexterity", "Intelligence", "Wisdom", "Charisma"};


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

Class classChoose(string choice){
    choice[0] = toupper(choice[0]);
    if(choice == "Warlock"){
        Warlock class1;
        return class1;
    }
    else if(choice == "Bard"){
        Bard class1;
        return class1;
    }
    else if(choice == "Wizard"){
        Wizard class1;
        return class1;
    }
    else if(choice == "Sorceror"){
        Sorceror class1;
        return class1;
    }
    else if(choice == "Barbarian"){
        Barbarian class1;
        return class1;
    }
    else if(choice == "Paladin"){
        Paladin class1;
        return class1;
    }
    else if(choice == "Druid"){
        Druid class1;
        return class1;
    }
    else if(choice == "Ranger"){
        Ranger class1;
        return class1;
    }
    else if(choice == "Rogue"){
        Rogue class1;
        return class1;
    }
    else if(choice == "Cleric"){
        Cleric class1;
        return class1;
    }
    else if(choice == "Monk"){
        Monk class1;
        return class1;
    }
    else if(choice == "Fighter"){
        Fighter class1;
        return class1;
    }
    Class news;
    return news;
}

Player createCharacter(){
    Player character;
    vector<int> stats;
    string temp;
    cout << "\nWelcome to Dungeons and Dragons Character Creation!" << endl;
    char check;
    bool namecheck = false;
    bool done = false;
    while(done == false){
        while(namecheck == false){
            cout << "Please name your character: ";
            cin >> temp;
            cout << "Your character will be named " << temp << endl;
            cout << "Is that correct? y/n ";
            cin >> check;
            if(check == 'y' || check == 'Y'){
                namecheck = true;
            }
        }
        character.name = temp;
        cout << "List of Classes:" << endl;
        for(int i = 1; i < classes.size(); i++){
            cout << classes[i] << endl;
            i++;
        }
        cout << "What class will your character be? ";
        namecheck = false;
        while(namecheck == false){
            cin >> temp;
            if(find(classes.begin(), classes.end(), temp) != classes.end()){
                character.Class = classChoose(temp);
                namecheck = true;
            }
            else{
                cout << "Invalid input. Please try again. ";
            }
        }
        cout << "Class: " << character.Class.name << "\n" << endl;
        cout << "Time for your attributes!" << endl;
        stats = attributeGenerate();
        for(int i = 0; i < 6; i++){
            cout << stats[i] << endl;
        }
        cout << "These are the generated numbers for your stats" << endl;
        cout << "What shall be your Strength stat? ";
        character.strength = numChecker(stats);
        stats.erase(remove(stats.begin(), stats.end(), character.strength));
        cout << "Strength: " << character.strength << endl;
        for(int i = 0; i < stats.size(); i++){
            cout << stats[i] << endl;
        }
        cout << "What shall be your Constitution stat? ";
        character.constitution = numChecker(stats);
        stats.erase(remove(stats.begin(), stats.end(), character.constitution));
        cout << "Constitution: " << character.constitution << endl;
        for(int i = 0; i < stats.size(); i++){
            cout << stats[i] << endl;
        }
        done = true;
    }
    return character;
}