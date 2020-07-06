#include <stdio.h>

int main(void) {
  int col, lin, i, j;
  printf("Dimensão linha e coluna:\n");
  scanf("%d", &lin);
  scanf("%d", &col);
  printf("Preencher matriz %d X %d\n", lin, col);
  int matriz[lin][col];
 
  for(i = 0; i<lin; i++){
    for(j = 0; j<col; j++){
      scanf("%d", &matriz[i][j]);      
    }
  }
 // a transposta
  printf("matriz original\n");
  for(i = 0; i<lin; i++){
    for(j = 0; j<col; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("A transposta é:\n");
  for(i = 0; i<col; i++){
    for(j = 0; j<lin; j++){
      printf("%d ", matriz[j][i]);
    }
    printf("\n");
  }

  return 0;
}
