#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 512

int main(int argc, char *argv[]) {
  int i, j, k;
  double a[N][N];
  double b[N][N];
  double c[N][N];
  double sum, r;
  clock_t start,end;  

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      a[i][j] = 1.0;
      b[i][j] = 2.0;
      c[i][j] = 0.0;
    }
  }

  start = clock();
  //matrix multiplication here
  for (j=0; j<N; j++)  {
    for (k=0; k<N; k++) {
      r = b[k][j];
      for (i=0; i<N; i++) {
        c[i][j] += a[i][k] * r;
      }
    }
  }
  end = clock();
  printf("It takes %f seconds\n", ((double)(end - start))/ CLOCKS_PER_SEC);

  return 0;
}
