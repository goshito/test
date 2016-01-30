#include <stdio.h>
#include <stdlib.h>

void readin(char *filename) {
    FILE *f;
    long size;
    char *b;
    size_t items_read;
    int linecount;
    int i;
    linecount = 0;
    f = fopen(filename, "rb");
    if (f == 0) {
        printf("Cannot open'%s'\n", filename);
    } else {
        fseek(f, 0, SEEK_END);
        size = ftell(f);
        rewind(f);
        b = (char*)malloc(size);    
        items_read = fread(b, 1, size, f);
        fclose(f);
        for (i = 0; i < size; i++) {
            if (b[i] == '\n') {
                linecount++;
            }
        }
        printf("number of lines was %d with %d chars (%d items read).\n", linecount, i, items_read);
        free(b);
    }
}

int main() {
    readin("cveta.txt");
    return 0;
}