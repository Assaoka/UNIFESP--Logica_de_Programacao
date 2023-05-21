#include <stdio.h>

int main(void) {
  int N, Ht;
  float VpH;
  scanf(" %d %d %f",&N,&Ht,&VpH);
  printf("NUMBER = %d\nSALARY = U$ %.2f\n",N,Ht*VpH);
  return 0;
}
