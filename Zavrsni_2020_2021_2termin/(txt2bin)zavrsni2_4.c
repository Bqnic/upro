#include <stdio.h>
_Bool txt2bin(char *inputFile, char *outputFile){

    FILE *text = fopen(inputFile, "r");
    FILE *bin = fopen(outputFile, "wb");

    if (text == NULL || bin == NULL)
        return 0;

    struct record kod;

    while(fscanf(text, "%2d%3d%3d", &kod.code, &kod.x, &kod.y) == 3){
        fseek(bin, (long)(kod.code - 1) * sizeof(kod), SEEK_SET);
        fwrite(&kod, sizeof(kod), 1, bin);
    }

    return 1;
    
}
