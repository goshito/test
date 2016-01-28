#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 4

typedef char Str50[50];  

typedef struct cd {
    Str50 name;
    Str50 artist;
    int trackcount;
    int rating;
} CD;

//struct cd cd_collection[NUMBER_OF_CDS];
CD cd_collection[NUMBER_OF_CDS];

void create_cdcollection() {
    strcpy(cd_collection[0].name, "Ebasi hitovete");
    strcpy(cd_collection[0].artist, "Briana Boobs");
    cd_collection[0].trackcount = 20;
    cd_collection[0].rating = 10;     
    
    strcpy(cd_collection[1].name, "Bash hitovete");
    strcpy(cd_collection[1].artist, "Gode&Bilche Beats");
    cd_collection[1].trackcount = 3;
    cd_collection[1].rating = 20;
    
    strcpy(cd_collection[2].name, "Retro chalga");
    strcpy(cd_collection[2].artist, "Marko i Snejina");
    cd_collection[2].trackcount = 8;
    cd_collection[2].rating = 6;
    
    strcpy(cd_collection[3].name, "Drisko Beats");
    strcpy(cd_collection[3].artist, "Drisko");
    cd_collection[3].trackcount = 9;
    cd_collection[3].rating = 2;
}


void display_cdcollection() {
    int i;
    //struct cd thiscd;
    CD thiscd;
    for (i = 0; i < NUMBER_OF_CDS; i++) {
        thiscd = cd_collection[i];
        printf("CD #%d: '%s' by %s has %d tracks. My rating = %d\n", i, thiscd.name, thiscd.artist, thiscd.trackcount, thiscd.rating);
    }
}

int main() {
    create_cdcollection();
    display_cdcollection();
    return 0;
}