struct point_s {
  int x;
  int y;
}

void generate(struct point_s *s, int n, int lb, int ub){

    for (int i = 0; i < n; i++){

        s[i].x = rand() % (ub - lb + 1) + lb;
        s[i].y = rand() % (ub - lb + 1) + lb;
    }
}
