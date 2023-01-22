#include <stdio.h>

_Bool setQuadrants(char *fileName){

    FILE *p = fopen(fileName, "r+b");

    if (p == NULL)
        return 0;

    struct record_s tocke;

    while(fread(&tocke, sizeof(tocke), 1, p) == 1){
        
        if (tocke.x > 0 && tocke.y > 0)
            tocke.quadrant = 1;

        else if (tocke.x < 0 && tocke.y > 0)
            tocke.quadrant = 2;

        else if(tocke.x < 0 && tocke.y < 0)
            tocke.quadrant = 3;

        else if (tocke.x > 0 && tocke.y < 0)
            tocke.quadrant = 4;

        fseek(p, -sizeof(tocke), SEEK_CUR);
        fwrite(&tocke, sizeof(tocke), 1, p);
        fflush(p);
    }

    return 1;
}
