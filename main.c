#include <stdio.h>

#define MAXSTRLEN 30
#define FILENAME "cveta.txt"
#define EMPTYFILENAME "nema.txt"
#define INVALIDFILENAME "sex.txt"

void linecount(char *fn) {
    int numlines = 0;
    char line[MAXSTRLEN];
    FILE *fp = fopen(fn, "r");
    if (fp != 0) {
        while (fgets(line, sizeof(line), fp) != 0) {
            numlines++;
        }
        fclose(fp);
        printf("%s contains %d lines of text.\n", fn, numlines);
    } else {
        printf("file %s cannot be opened", fn);
    }
}

int main() {
    FILE *fp;
    fp = fopen("cveta.txt", "w");
    fputs("I want put my tongue into Cveta's mouth...\n", fp);
    fputs("...because she is asking for it.", fp);
    fclose(fp);
    
    fp = fopen("cveta.txt", "a");
    fputs("I also want to fuck her", fp);
    fclose(fp);
    
    fp = fopen("nema.txt", "w");
    fclose(fp);
    linecount(FILENAME);
    linecount(EMPTYFILENAME);
    linecount(INVALIDFILENAME);
    return 0;
}