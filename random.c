#include <stdlib.h>

char randchar(){
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //generates a number 0-26 and accesses the value at that index in letters
    char randletter = letters[rand() %26];
    return randletter;
}
