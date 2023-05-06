#include <stdio.h>

int main(void) {
  int N, a = 0, b = 1, c;

  scanf(" %d", &N);
  while (N-- > 0) {
    if (a == 0)
      printf("%d", a);
    else
      printf(" %d", a);
    c = a;
    a += b;
    b = c;
  }
  printf("\n");
  return 0;
}