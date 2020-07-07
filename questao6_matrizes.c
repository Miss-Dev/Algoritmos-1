#include <stdio.h>
/*    6. Dadas duas matrizes A e B, com dimensões de 5x5, retorne:
        a. a soma destas duas matrizes
        b. a soma das diagonais principal e secundária de cada matriz
        c. a multiplicação das duas matrizes

*/
#define tam 5
int main(void) {
  int A[tam][tam], B[tam][tam], soma[tam][tam];
  int mult[tam][tam], soma_princ = 0, soma_sec = 0;
  int i, j;
  //ler as valores
  printf("Preencha a matriz A 5x5\n");
  for(i = 0; i<tam; i++){
    for(j = 0; j<tam; j++){
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]); 
      if(i==j)
        soma_princ += A[i][j];
      else if(j == tam-1-i)
        soma_sec += A[i][j];      
      soma[i][j] = A[i][j];  // a matriz soma recebe primero os valores da matriz A
    }
  }
  printf("Soma da diagonal principal: %d\n", soma_princ);
  printf("Soma da diagonal secundaria: %d\n", soma_sec);
  soma_princ = 0;
  soma_sec = 0;
  printf("Preencha a matriz B 5x5\n");
  for(i = 0; i<tam; i++){
    for(j = 0; j<tam; j++){
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
      if(i==j)
        soma_princ += B[i][j];
      else if(j == tam-1-i)
        soma_sec += B[i][j];  
      soma[i][j] = soma[i][j]+B[i][j];  // depois soma os elementos com a matriz B
    }
  }
  printf("Soma da diagonal principal: %d\n", soma_princ);
  printf("Soma da diagonal secundaria: %d\n", soma_sec);
  
  //a soma das matrizes ´
  printf("Soma:\n");
  for(i = 0; i<tam; i++){
    for(j = 0; j<tam; j++){
      printf("%d ", soma[i][j]);

      }
      printf("\n");
  }
   //efetuando a multiplicação
  int soma_produtos, x;
  for(i = 0; i<tam; i++){
    for(j = 0; j<tam; j++){
      soma_produtos = 0;
      for(x = 0; x<tam; x++){
        soma_produtos += A[i][x]*B[x][j];
        mult[i][j] = soma_produtos;
      }
    }
  }
  printf("multiplicação:\n");
  for(i = 0; i<tam; i++){
    for(j = 0; j<tam; j++){
      printf("%d ", mult[i][j]);

      }
      printf("\n");
  }

  return 0;
}
