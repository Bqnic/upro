#include <stdio.h>

struct Employee {
   char firstName[20 + 1];
   char lastName[30 + 1];
   int positionId;
   int employedSinceYear;
};

struct Position {
   int idPosition;
   char positionName[20 + 1];
};

//gornji dio koda ne stavlja se u edgar

void generateReport(const char *employeesFilename, const char *positionsFilename, const char *outputFilename){

    struct Employee worker; 
    struct Position poz;

    FILE *zaposlenici = fopen(employeesFilename, "rb");
    FILE *pozicije = fopen(positionsFilename, "rb");
    FILE *izlaz = fopen(outputFilename, "w");

    while(fread(&worker, sizeof(worker), 1, zaposlenici) == 1){

        if (worker.employedSinceYear > 2007){
            
            while(fread(&poz, sizeof(poz), 1, pozicije) == 1){

                if (poz.idPosition == worker.positionId){

                    fprintf(izlaz, "%s,%s;%d;%s\n", worker.lastName, worker.firstName, worker.employedSinceYear, poz.positionName);
                }
            }

            fseek(pozicije, 0L, SEEK_SET);
        }
    } 

    fclose(zaposlenici);
    fclose(pozicije);
    fclose(izlaz);
}
