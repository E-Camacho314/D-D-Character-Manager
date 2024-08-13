#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"


int nextInstruction(char *Word){
    int  returnV;

    fscanf(stdin, "%s", Word);


    if (strcmp(Word, "Stop")==0) return 1;
    if (strcmp(Word, "CreateCharacter")==0) return 1;

    if (strcmp(Word, "SingleSource")==0){
        return 1;
    }

    if (strcmp(Word, "PrintPath")==0){
            return 1;
    }

    if (strcmp(Word, "PrintLength")==0){
        return 1;
    }

    if (strcmp(Word, "SinglePair")==0){
        return 1;
    }

    return 0;
}