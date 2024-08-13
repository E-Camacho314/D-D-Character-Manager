#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Class {
    public:
        int one;
        string name;
};

class Warlock : public Class {
    public:
        string name = "Warlock";
};

class Wizard : public Class {
    public:
        string name = "Wizard";
};

class Sorceror : public Class {
    public:
        string name = "Sorceror";
};

class Barbarian : public Class {
    public:
        string name = "Barbarian";
};

class Paladin : public Class {
    public:
        string name = "Paladin";
};

class Druid : public Class {
    public:
        string name = "Druid";
};

class Ranger : public Class {
    public:
        string name = "Ranger";
};

class Rogue : public Class {
    public:
        string name = "Rogue";
};

class Cleric : public Class {
    public:
        string name = "Cleric";
};

class Monk : public Class {
    public:
        string name = "Monk";
};

class Bard : public Class {
    public:
        string name = "Bard";
};

class Fighter : public Class {
    public:
        string name = "Fighter";
};
