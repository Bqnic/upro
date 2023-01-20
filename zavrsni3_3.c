void igra(int seed, int brojBacanja, int *pobjednik, int *razlika){

    srand(seed);

    int igrac1[brojBacanja], igrac2[brojBacanja], sum1 = 0, sum2 = 0;

    for (int i = 0; i < brojBacanja * 2; i++){
        
        if (i % 2 == 0){
            igrac1[i] = rand() % 6 + 1;
            sum1 += igrac1[i];
        }

        else{
            igrac2[i] = rand() % 6 + 1;
            sum2 += igrac2[i];
        }
    }


    if (sum1 > sum2){
        *pobjednik = 1;
        *razlika = sum1 - sum2;
    }

    else if (sum1 < sum2){
        *pobjednik = 2;
        *razlika = sum2 - sum1;
    }

    else{
        *pobjednik = 0;
        *razlika = 0;
    }
}