#include <stdio.h>

int main(void) {
  int N, i = 1;
  scanf(" %d",&N);
  
  while (N-- > 0) {
    printf("%d %d %d PUM\n", i, i+1, i+2);
    i += 4;
  }
  return 0;
}
