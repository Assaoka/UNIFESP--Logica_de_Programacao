// 2) Faça um programa que leia o total gasto pelo cliente de uma loja. Mostre as seguintes opções de pagamento, solicite a opção desejada e imprime o valor total do pagamento. OBS: fazer uma função para cada opção. E imprimir na main o valor final da compra.

#include <stdio.h>

float PagVista (float VT);
  //  1° Opção: a vista com 10% de desconto

float PagParcelado2 (float VT); 
  //  2° Opção: em duas vezes (preço da etiqueta)

float PagParcelado3a10 (float VT, int t);
  //  3° Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).


int main(void) {
  float VT;
  int t = 3300, val = 10;
  
  printf("Qual o total gasto pelo cliente: "), scanf(" %f", &VT);
  
  if (VT < 100)
    val = 2;
  
  while (t > val) {
    if ((t > val)&&(t != 3300))
      printf("O valor é invalido (Max = %d)! ", val);
    printf("Qual o número de parcelas (Digite 1 para pagamentos a vista): "), scanf(" %d", &t);
  }

  if (t == 1)
    VT = PagVista(VT);
  else if (t == 2)
    VT = PagParcelado2(VT);
  else if ((t > 2)&&(t <= 10))
    VT = PagParcelado3a10(VT, t);

  printf("Total: %dx de R$ %.2f", t, VT);
  return 0;
}


float PagVista (float VT) {
  VT = 0.9 * VT;
  return VT;
}


float PagParcelado2 (float VT) {
  VT = VT/2;
  return VT;
}
  

float PagParcelado3a10 (float VT, int t) {
  VT = (VT * (1 + 0.03 * t))/t;
  return VT;
}
