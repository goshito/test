#include <stdio.h>
#include <string.h>

#define MAXSTRLEN 200

char mystring[] = "On the 2nd day of Christmas my true love gave to me, 2 turtle doves and a partridge in a pear tree.";
char tens[] =     "         10        20        30        40        50";
char nums[] =     "123456789012345678901234567890123456789012345678901234567890";
char msg1[MAXSTRLEN] = "Result1: ";
char msg2[MAXSTRLEN] = "Result2: ";
char myotherstr[6];

void showstring() {
    printf("\n\n%s\n", mystring);
    printf("%s\n%s\n", tens, nums);
}

void searchstring(char searchstr[]) {
    char *ptrtostr;
    int foundat;
    ptrtostr = strstr(mystring, searchstr);
    foundat = (int)((ptrtostr - mystring) + 1); //The subtraction of the two strins decimal values gives the position - 1
    if (ptrtostr != 0)
        printf("\n'%s' found at position %d\n", searchstr, foundat);
    else 
        printf("\n'%s' not found \n", searchstr);    
}

void copystring() {
    myotherstr[0] = 0;
    strncpy(myotherstr, "Easter", 4);
    printf("\nCopied this string: '%s'", myotherstr);
}

void concatstring() {
    strcat(msg1, "Easter");
    printf("\n\nstrcat: '%s'", msg1);
    strncat(msg2, "Easter", 4);
    printf("\nstrcat: '%s'\n", msg2);
}


int main() {
    printf("The lenght of mystring = %d", strlen(mystring));
    printf("\nThe lenght of 'Hello' = %d", strlen("Hello"));
    showstring();
    searchstring("2nd");
    searchstring("Christmas");
    searchstring("Easter");
    copystring();
    concatstring();
}