#include <stdio.h>

int main(void) {
  int N;
  scanf(" %d",&N);
  printf("%d:%d:%d\n",N/3600,(N%3600)/60, (N%3600)%60);
  return 0;
}