#include <stdio.h>
#include <ctype.h>
#include <string.h>

char mystring[] = "What the fuck is this shit 0x00???";

void chartypes() {
    int i;
    char c;
    int numDigits = 0;
    int numLetters = 0;
    int numUpCase = 0;
    int numLowCase = 0;
    int numSpaces = 0;
    int numPunct = 0;
    int numCtl = 0;
    int numUnknown = 0;
    int lenghtOfStr = strlen(mystring);
    
    for (i = 0; i < lenghtOfStr; i++) {
        c = mystring[i];
        if (isalpha(c)) {
            numLetters++;
            if (isupper(c)) {
                printf("'%c' [uppercase character]\n", c);
                numUpCase++;
            } else {
                printf("%c [lowecase character]\n", c);
                numLowCase++;
            }
        } else if (isdigit(c)) {
            printf("'%c' [digit]\n", c);
            numDigits++;
        } else if (ispunct(c)) {
            printf("'%c' [puntuation]\n", c);
            numPunct++;
        } else if (isblank(c)) {
            printf("'%c' [blank]\n", c);
            numSpaces++;
        } else if (iscntrl(c)) {
            printf("'%c' [ctrl]\n", c);
            numCtl++;
        } else {
        printf("'%c' [unknown]\n", c);
        numUnknown++;
       }
    }
    printf("The string contains %d characters: %d letters (%d uppercase, %d lowercase)\n", lenghtOfStr, numLetters, numUpCase, numLowCase);
    printf( "%d digits, %d ctrl, %d punctuation characters, %d spaces and %d unclassified characters.\n", numDigits, numCtl, numPunct, numSpaces, numUnknown);
}


int main() {
    if (isalpha('x')) {
        printf("'x' is a letter");
    } else {
        printf("'x' is not a letter\n");
    }
    chartypes();
    return 0;
}