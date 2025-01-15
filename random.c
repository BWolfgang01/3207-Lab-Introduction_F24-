#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

int main() {
    char randomCharacter = randchar();
    printf("%c", randomCharacter);
}

char randchar(){
    srand((unsigned)time(NULL));
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //generates a number 0-26 and accesses the value at that index in letters
    char randletter = letters[rand() %26];
    return randletter;
}
