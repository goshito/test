/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <string.h>
#include "mystring.h"

// reads line from input and returns the lenght of string
int readln(char s[], int maxlen) {
    char ch;
    int i;
    int chars_remain;
    i = 0;
    chars_remain = 1;
    while (chars_remain) {
        ch = getchar();
        if((ch == '\n') || (ch == EOF)) {
            chars_remain = 0;
        } else if (i < maxlen - 1) {
            s[i] = ch;
            i++;
        }
    }
    s[i] = 0;
    return i;
}

// returns index (o-based) of first char of searchstring in sourcestring
// or -1 if searchstring is not found
int searchstring(char searchstr[], char sourcestr[]) {
    char *ptrtostr;
    int foundat;
    foundat = -1;
    ptrtostr = strstr(sourcestr, searchstr); 
    if (ptrtostr != NULL) {
        foundat = (int)((ptrtostr - sourcestr));
    }
    return foundat;
}

