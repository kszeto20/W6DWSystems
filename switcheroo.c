#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("Good News Everyone!\n");

  int arr[10];

  arr[0] = 0;

  int i;

  srand(time(NULL));

  for (i = 1; i < 10; i++) {
    arr[i] = rand();
  }

  printf("Array1: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr[i]);
    if (i < 9) {
      printf(", ");
    }
  }
  printf("]\n");

  int arr2[10];

  int *p1 = &arr;
  int *p2 = &arr2;

  for (i = 0; i < 10; i++) {
    *(p2 + 9 - i) = *(p1 + i);
  }

  printf("Array2: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr2[i]);
    if (i < 9) {
      printf(", ");
    }
  }
  printf("]\n");

  int arr3[10];

  int *p = &arr;
  int *p3 = &arr3;

  for (i = 0; i < 10; i++) {
    i[p3] = (9 - i)[arr];
  }

  printf("Array3: [");
  for (i = 0; i < 10; i++) {
    printf("%d", arr3[i]);
    if (i < 9) {
      printf(", ");
    }
  }
  printf("]\n");

}
