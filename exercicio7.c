#include <stdio.h>
//7. Escreva um algoritmo para ler 15 números e mostrar o produto desses números.
int main(void){
	int i, n, prod;
	prod = 1;
	for(i = 0; i<15; i++){
		scanf("%d", &n);
		prod = prod*n;
	}
	printf("Resultado = %d", prod);
}
