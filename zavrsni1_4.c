#include <stdio.h>

void increaseLowest(char *fileName, int percentage){

    struct record place;

    FILE *file = fopen(fileName, "r+b");

    int min, set = 0, min_i;

    while(fread(&place, sizeof(place), 1, file) == 1){
        
        if (place.salary < min || set == 0){
            min = place.salary;
            min_i = set;
        }

        set++;
    }

    fseek(file, min_i * sizeof(place), SEEK_SET);
    fread(&place, sizeof(place), 1, file);

    place.salary = place.salary * (1 + (percentage / 100.));

    fseek(file, min_i * sizeof(place), SEEK_SET);
    fwrite(&place, sizeof(place), 1, file);

    fclose(file);
}
