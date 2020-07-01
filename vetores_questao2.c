#include <stdio.h>
/*    3. Dado o vetor  [2; 4; 35; 50; 23; 17; 9; 12; 27; 5] retorne:	
    a. O maior valor;
    b. A média dos valores.*/
int main(void){
  int vet[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
  int maior, soma = 0;
  maior = vet[0]; // variavel maior recebe a primeira posição do vetor
  float media = 0.0;
  for(int i= 0; i<10; i++){
    if(vet[i]>maior){
      maior = vet[i]; // maior recebe vet[i], se vet[i] for maior
    } 
    soma = soma + vet[i];
    
  }
  media = soma/10.0;
  printf("O maior valor = %d\n", maior);
  printf("A media = %.2f, a soma = %d", media, soma);


  return 0;
}
