#include <stdio.h>
#define PRAG 80

struct rezultat {
   char ime[15 + 1];
   int bodovi;
};

int najstudenti(char *txtdat, char *bindat){

    FILE *ulaz = fopen(txtdat, "r");
    FILE *izlaz = fopen(bindat, "wb");

    if (ulaz == NULL || izlaz == NULL)
        return -1;

    int zapisi = 0;

    struct rezultat student;

    while(fscanf(ulaz, "%s %d", student.ime, &student.bodovi) == 2){
        
        if (student.bodovi >= 80){
            fwrite(&student, sizeof(student), 1, izlaz);
            zapisi++;
        }
    }
   
    fclose(ulaz);
    fclose(izlaz);

    return zapisi;
}