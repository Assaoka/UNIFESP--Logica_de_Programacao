#include <stdio.h>

int main(void) {
  int X, i = 0;
  
  while (X != 0) {
    scanf(" %d", &X);
    while (i++ != X) {
      if (i == 1)
        printf("%d", i);
      else
        printf(" %d", i);
    }
    i = 0;
    if (X != 0)
     printf("\n");
  }
  return 0;
}
