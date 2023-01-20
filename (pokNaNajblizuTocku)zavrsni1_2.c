#include <stdio.h>
#include <math.h>

typedef struct {
   double x;
   double y;
} tocka_t;

//gornji dio koda nije potrebno pisat u edgar

tocka_t *pokNaNajblizuTocku(tocka_t *arr, int n){

    double min = sqrt(pow(arr[0].x, 2) + pow(arr[0].y, 2)), d;
    int min_i = 0;

    for (int i = 1; i < n; i++){
        d = sqrt(pow(arr[i].x, 2) + pow(arr[i].y, 2));

        if (min >= d){
            min = d;
            min_i = i;
        }
    }
    return arr + min_i;
}




