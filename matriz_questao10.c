#include <stdio.h>

int main(void) {
  int n, m, i, j, pos;
  printf("Digite quantas linhas para a matriz\n");
  scanf("%d",&n);
   printf("Digite quantas colunas para a matriz\n");
  scanf("%d", &m);
  // declarando a matriz com tamanho n x m
  int matriz[n][m];
  // declarando um vetor com tamanho n*m
  int vetor[n*m];
  printf("Informe os valores para a matriz[%d][%d]\n", n, m);
  for(i = 0; i<n; i++){
    for(j = 0; j<m; j++){
      scanf("%d", &matriz[i][j]);      
    }
  }
   
  //inserindo os elementos da matriz no vetor unidimensional
  pos = 0; // variável de posição para o vetor
  for(i = 0; i<n; i++){
    for(j = 0; j<m; j++){
      vetor[pos] = matriz[i][j];      
      pos++; // para caminhar mais uma posição do vetor até terminar de caminhar pela matriz         
    }    
  }

  //imprimindo vetor n x m
  for(i = 0; i<pos; i++){
    printf("[%d]", vetor[i]);
  }

  return 0;
}
