void danMjesec(int rbrDanGodina, int *dan, int *mjesec){

    if (rbrDanGodina <= 31){
        *dan = rbrDanGodina;
        *mjesec = 1;
    }

    else if (rbrDanGodina > 31 && rbrDanGodina <= (28 + 31)){
        *dan = rbrDanGodina - 31;
        *mjesec = 2;
    }

    else if (rbrDanGodina > (28 + 31) && rbrDanGodina <= (31 + 31 + 28)){
        *dan = rbrDanGodina - (28 + 31);
        *mjesec = 3;
    }

    else if (rbrDanGodina > (31 + 31 + 28) && rbrDanGodina <= (31 + 31 + 28 + 30)){
        *dan = rbrDanGodina - (28 + 31 + 31);
        *mjesec = 4;
    }
    
    else if (rbrDanGodina > (31 + 31 + 28 + 30) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30);
        *mjesec = 5;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31);
        *mjesec = 6;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30);
        *mjesec = 7;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30 + 31) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30 + 31);
        *mjesec = 8;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30 + 31 + 31);
        *mjesec = 9;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30);
        *mjesec = 10;
    }
     else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
        *mjesec = 11;
    }

    else if (rbrDanGodina > (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) && rbrDanGodina <= (31 + 31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31)){
        *dan = rbrDanGodina - (28 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
        *mjesec = 12;
    }
  
}