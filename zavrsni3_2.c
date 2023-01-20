void SumaVektora(struct vektor_s *pok, int n, struct vektor_s *rez){

    for (int i = 0; i < n; i++){

        rez[i].komp_i = 0;
        rez[i].komp_j = 0;

        rez[i].komp_i += pok[i].komp_i;
        rez[i].komp_j += pok[i].komp_j;
    }
}