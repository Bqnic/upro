int nulovanje(int *arr, int m, int n){

    int max = 0, imax = 0, jmin = 0, prev = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            if (arr[i * n + j] >= max){
                imax = i;
                max = arr[i * n + j];
            }
        }
    }

    int check = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            if (max == arr[i * n + j] && i == imax){
                jmin = j;
                check = 1; 
                break;
            }

            if (check) break;
        }
    }

    int sum = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            if (i == imax){
                sum += arr[i * n + j];
                arr[i * n + j] = 0;
            }

            if (j == jmin){
                sum += arr[i * n + j];
                arr[i * n + j] = 0;
            }
        }
    }


    return sum;
}
