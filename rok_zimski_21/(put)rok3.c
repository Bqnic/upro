void put(int seed, int koraka, struct tocka_s *tocke){

    srand(seed);

    tocke[0].x = 0;
    tocke[0].y = 0;

    for (int i = 1; i <= koraka; i++){

        tocke[i].x = tocke[i - 1].x + rand() % 11;
        tocke[i].y = tocke[i - 1].y + rand() % 11;
    }
}