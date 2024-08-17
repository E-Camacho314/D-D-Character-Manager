#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "Spells.cpp"
#include <iostream>
using namespace std;

// Class object to define character class
class Class {
    public:
    // name of class
    string name;
    // class level
    int level;
    // whether or not class can cast spells
    bool spellcasting;
    // spellcasting attribute
    string spellAbility;
    // available spells
    vector<spell> spellList;
    vector<string> languages;
    // saving throw attributes
    vector<string> savingThrows;
    // proficiencies
    vector<string> armor_proficiencies;
    vector<string> weapon_proficiencies;
    vector<string> tool_proficiencies;
    // WARLOCK ONLY : otherworldly patron
    string patron;
    
    //prints out information on the class
    void classInfo(){
        cout << "Class: " << name << endl;
        cout << "Class Level: " << level << endl;
    }

    //updates all class infor based on user choice of class
    void update(){
        if(name == "Warlock"){
            spellcasting = true;
            spellAbility = "Charisma";
            armor_proficiencies.push_back("light");
            weapon_proficiencies.push_back("simple");
            savingThrows.push_back("Wisdom");
            savingThrows.push_back("Charisma");

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
