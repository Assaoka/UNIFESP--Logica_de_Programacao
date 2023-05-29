// Fila do Recreio | beecrowd | 1548
#include <stdio.h>

void ordenarVetor(int vetor[], int tamanho) {
    int i = 0;
    while (i < tamanho - 1) {
        int j = i + 1;
        while (j < tamanho) {
            if (vetor[j] > vetor[i]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int N, M, Alunos;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d", &M);

        int P[M], Aux[M];
        int i = 0;

        while (i < M) {
            scanf("%d", &P[i]);
            Aux[i] = P[i];
            i++;
        }

        ordenarVetor(P, M);


        i = 0, Alunos = 0;
        do {
          if (P[i] == Aux[i])
            Alunos++;
        } while (i++ < M);
        printf("%d\n", Alunos);
          
        N--;
    }

    return 0;
}
