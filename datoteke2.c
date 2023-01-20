#include <stdio.h>
struct Vehicle {
   char registration[8 + 1];
   int weightKilos;
   int productionYear;
   _Bool isInUse;
};

//gornji dio koda se ne stavlja u edgar

void reuseVehicles(const char *vehiclesFilename, int fromYear, int belowWeight){

    FILE *autofile = fopen(vehiclesFilename, "r+b");

    struct Vehicle car;

    int set = 0;

    while (fread(&car, sizeof(car), 1, autofile) == 1){
        
        if (car.productionYear > fromYear && car.weightKilos < belowWeight){
            car.isInUse = 1;
            fseek(autofile, set * sizeof(car), SEEK_SET);
            fwrite(&car, sizeof(car), 1, autofile);
        }
        
        else{
            car.isInUse = 0;
            fseek(autofile, set * sizeof(car), SEEK_SET);
            fwrite(&car, sizeof(car), 1, autofile);
        }
        set++;
    }

    fclose(autofile);

}