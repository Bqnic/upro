#include <stdio.h>

void odrediMjesecIDanUskrsa (int godina, int *mjesec, int *dan){
    int x, y;

    if (godina >= 1582 && godina <= 1699){
        x = 22;
        y = 2;
    }

    else if (godina >= 1700 && godina <= 1799){
        x = 23;
        y = 3;
    }

    else if (godina >= 1800 && godina <= 1899){
        x = 23;
        y = 4;
    }

    else if (godina >= 1900 && godina <= 2099){
        x = 24;
        y = 5;
    }
    
    int a = godina % 19, b = godina % 4, c = godina % 7, d = (a * 19 + x) % 30, e = (2 * b + 4 *c + 6 * d + y) % 7;

    if (22 + e + d < 31){
        *mjesec = 3;
        *dan = 22 + d + e;
    }

    else{
        *dan = d + e - 9;
        *mjesec = 4;
    }

}
