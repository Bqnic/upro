int izgladi(double *p, int m, int n){

    int br = 0;
    double prev[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            prev[i][j] = p[n * i + j];

    }

    for (int i = 0; i < m; i++){
        for (int j = 1; j < n; j++){
            
            if (j != n - 1){
            
                p[n * i + j] = (prev[i][j - 1] + p[n * i + j] + p[n * i + j + 1]) / 3;

                if (p[n * i + j] != prev[i][j])
                    br++;
            }

        }
    }

    return br;

}
    

