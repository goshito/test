#include <stdio.h>
#include <string.h>

#define FILENAME "cveta.txt"
#define MAXSTRLEN 200

// returns index (0-based) of first char of searchstring in sourcestring
// or -1 if searchstring is not found   

static int searchstring(char searchstr[], char sourcestr[]) {
    char *ptrtostr;
    int foundat;
    foundat = -1;
    ptrtostr = strstr(sourcestr, searchstr);
    if (ptrtostr != 0) {
        foundat = (int)((ptrtostr - sourcestr));
    }
    return foundat;
}

void findstrings(char *fileName, char *ss) {
    FILE *f;
    int count;
    char line[MAXSTRLEN];
    
    f = fopen(fileName, "r");
    if (f == 0) {
        printf("Can't open file: '%s'.\n", FILENAME);
    } else {
        count = 0;
        while (fgets(line, MAXSTRLEN, f) != 0) {
            if (searchstring(ss, line) >= 0) {
                count++;
            }
        }
        printf("'%s' was found in %d lines\n", ss, count);
        fclose(f);
    }
}

int main() {
    FILE *fp;
    fp = fopen(FILENAME, "a");
    fputs("\ntongue", fp);
    fclose(fp);
    
    findstrings(FILENAME, "tongue");
    
    /*
    FILE *fp;
    char *string;
    fp = fopen("cveta.txt", "r");
    fgets(string, MAXSTRLEN, fp);
    printf("%d", searchstring(string, "tongue"));
    */
    return 0;
}