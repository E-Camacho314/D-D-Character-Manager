#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"


int nextInstruction(char *Word, int *position, int *key){
    int  returnV;

    fscanf(stdin, "%s", Word);


    if (strcmp(Word, "Stop")==0) return 1;
    if (strcmp(Word, "PrintADJ")==0) return 1;

    if (strcmp(Word, "SingleSource")==0){
        returnV = fscanf(stdin, "%d", key);
        if (returnV == 1){
            return 1;
        }else{
            return 0;
        }
    }

    if (strcmp(Word, "PrintPath")==0){
        returnV = fscanf(stdin, "%d", position);
        if (returnV == 1){
            returnV = fscanf(stdin, "%d", key);
            if(returnV == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    if (strcmp(Word, "PrintLength")==0){
        returnV = fscanf(stdin, "%d", position);
        if (returnV == 1){
            returnV = fscanf(stdin, "%d", key);
            if(returnV == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    if (strcmp(Word, "SinglePair")==0){
        returnV = fscanf(stdin, "%d", position);
        if (returnV == 1){
            returnV = fscanf(stdin, "%d", key);
            if(returnV == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    return 0;
}