#include <stdio.h>

struct Student {
   char firstName[30 + 1];
   char lastName[30 + 1];
   int points[5];
};


 //gornji dio koda se ne stavlja u edgar
 
void analyzeGrades(const char *studentsFilename, const char *reportFilename){

    FILE *studenti = fopen(studentsFilename, "rb");
    FILE *rep = fopen(reportFilename, "w");

    struct Student ucenici;

    int maxbodovi = 0, ukupnobodova = 0;

    while(fread(&ucenici, sizeof(ucenici), 1, studenti) == 1){
        
        for (int i = 0; i < 5; i++)
            ukupnobodova += ucenici.points[i];

        fprintf(rep, "%s %s %d\n", ucenici.firstName, ucenici.lastName, ukupnobodova);

        if (maxbodovi < ukupnobodova)
            maxbodovi = ukupnobodova;

        ukupnobodova = 0;
    }

    fseek(studenti, 0L, SEEK_SET);

    ukupnobodova = 0;

    while(fread(&ucenici, sizeof(ucenici), 1, studenti) == 1){

        for (int i = 0; i < 5; i++)
            ukupnobodova += ucenici.points[i];

        if (maxbodovi == ukupnobodova)
            fprintf(rep, "Najbolji rezultat: %s %s", ucenici.firstName, ucenici.lastName);
       
       ukupnobodova = 0;
    }

    fclose(studenti);
    fclose(rep);
}
