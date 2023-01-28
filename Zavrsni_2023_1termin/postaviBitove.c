#include <math.h>
int postaviBitove(unsigned short int *pokNaBroj, int n){

    int change = 0;

    for (int i = 0; i < n; i++){
        
        if ((*pokNaBroj >> i & 1) == 0){
            change++;
            *pokNaBroj += (int)pow(2, i);

        }
    }
   return change;
}
