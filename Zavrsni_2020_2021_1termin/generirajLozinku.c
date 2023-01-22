void generirajLozinku (unsigned int sjeme, const char *znakoviZaLozinku, int duljLoz, char *lozinka){

    srand(sjeme);

    for (int i = 0; i < duljLoz; i++){
        lozinka[i] = znakoviZaLozinku[rand() % strlen(znakoviZaLozinku)];
    }
   
   lozinka[duljLoz] = '\0';
}
