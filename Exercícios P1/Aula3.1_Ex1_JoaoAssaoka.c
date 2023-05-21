#include <stdio.h>

int main(void) {
float P1, P2, T1, T2, T3, M1, M2, M3;
scanf(" %f %f %f %f %f %f", &P1, &P2, &T1, &T2, &T3, &M3);
M1 = (P1+P2)/2;
M2 = (T1+T2+T3)/3;
printf("M1 = %f\nM2 = %f\nM3 = %f\n-----------------\nNota Final = %f",M1,M2,M3,(6*M1+3*M2+M3)/10);
}
