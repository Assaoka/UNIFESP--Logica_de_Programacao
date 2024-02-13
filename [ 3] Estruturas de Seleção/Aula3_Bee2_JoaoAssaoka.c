// Aula 3 - Beecrowd 2 - João Assaoka
// Lanche - 1038
#include <stdio.h>

int main() {
	int C, N;
	
	scanf(" %d %d",&C,&N);
	
	switch (C) {
		case 1:
			printf("Total: R$ %.2f\n",4.0*N); 
			break;  
		case 2:
			printf("Total: R$ %.2f\n",4.5*N); 
			break;  
		case 3: 
			printf("Total: R$ %.2f\n",5.0*N); 
			break;  
		case 4: 
			printf("Total: R$ %.2f\n",2.0*N); 
			break;  
		case 5: 
			printf("Total: R$ %.2f\n",1.5*N); 
			break;  
	}
	return 0;
}
