#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "Spells.cpp"
#include <iostream>
using namespace std;

class Class {
    public:
    string name;
    bool spellcasting;
    string spellAbility;
    vector<spell> spellList;
    vector<string> languages;
    vector<string> savingThrows;
    vector<string> proficiencies;

    void classInfo(){
        cout << "Class: " << name << endl;
    }
    void update(){
        if(name == "Warlock"){
            spellcasting = true;
            spellAbility = "Charisma";
        }
        else if(name == "Bard"){  
            
        }
        else if(name == "Wizard"){
 
        }
        else if(name == "Sorceror"){

        }
        else if(name == "Barbarian"){

        }
        else if(name == "Paladin"){

        }
        else if(name == "Druid"){

        }
        else if(name == "Ranger"){

        }
        else if(name == "Rogue"){

        }
        else if(name == "Cleric"){

        }
        else if(name == "Monk"){

        }
        else if(name == "Fighter"){

        }
    }
};

/*class Warlock : public Class {
    public:
        string name = "Warlock";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Wizard : public Class {
    public:
        string name = "Wizard";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Sorceror : public Class {
    public:
        string name = "Sorceror";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Barbarian : public Class {
    public:
        string name = "Barbarian";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Paladin : public Class {
    public:
        string name = "Paladin";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Druid : public Class {
    public:
        string name = "Druid";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Ranger : public Class {
    public:
        string name = "Ranger";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Rogue : public Class {
    public:
        string name = "Rogue";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Cleric : public Class {
    public:
        string name = "Cleric";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Monk : public Class {
    public:
        string name = "Monk";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Bard : public Class {
    public:
        string name = "Bard";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};

class Fighter : public Class {
    public:
        string name = "Fighter";
        void classInfo(){
            cout << "Class: " << name << endl;
        }
};*/
