int unosKonverzija (char *niz, int *dulj){

    int n = 0;
    char arr[10 + 1];

    while (arr[n - 1] != '!' && n <= 10){
        scanf("%c", &arr[n]);
        n++;
    }

    n--;
    arr[n] = '\0';

    int converted = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            arr[i] += 32;

        else if (arr[i] >= '0' && arr[i] <= '9'){
            arr[i] = '?';
            converted++;
        }
    }

    *dulj = n;
    n = 0;
    while (arr[n] != '\0'){
        niz[n] = arr[n];
        n++;
    }

    niz[n] = '\0';

    return converted;
}
