#include <stdio.h>

int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

<<<<<<< HEAD
  printf("matrix[1][2] : %d\n", matrix[1][2]);
=======
//  printf("matrix[1][1] : %d\n", matrix[1][1]);
>>>>>>> 7078b27 (assigned)

  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  return 0;
}