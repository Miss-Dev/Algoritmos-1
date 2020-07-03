#include <stdio.h>
#define TAM 3

void mostrar_jogo(char m[][TAM]);

int ganhou_jogo(char m[][TAM]);
  
int pode_jogar(int i, int j, char m[][TAM]);

int main(void) {
  char des;
  int ganhou = 0, vez = 1, jogou = 0, empate = 0;
  int i, j;
  char matriz[TAM][TAM];


  printf("Jogador 1 fica com X\nJogador 2 fica com O\n");
  while (ganhou!=1 && ganhou!=-1){
    printf("Começou o jogo!\n");
    mostrar_jogo(matriz); 

    printf("\nJogador %d escolha a posição\n", vez);
    printf("Linha: ");
    scanf("%d", &i);
    printf("Coluna: ");
    scanf("%d", &j); 
    while(pode_jogar(i, j, matriz)!=1){
      printf("Posição inexistente ou ocupada!\n");
      printf("Linha: ");
      scanf("%d", &i);
      printf("Coluna: ");
      scanf("%d", &j); 
    }
    if(vez == 1){
      jogou = 1;
      matriz[i-1][j-1] = 'X';
     
    }
    else if(vez == 2){
      jogou = 2;
      matriz[i-1][j-1] = 'O';
    
    }
    if(jogou == 1)
      vez = 2;
    else
      vez = 1; 
    
    ganhou = ganhou_jogo(matriz);

  }
  if(ganhou!=-1){    
      mostrar_jogo(matriz);
      printf("Parabéns player %d você ganhou!\n", jogou);      
  }
  else{
    printf("Empate!\n");
  }
  return 0;
}

void mostrar_jogo(char m[][TAM]){
   for(int i = 0; i<3; i++){
      for(int j = 0; j<3; j++){ 
              
        printf("%c", m[i][j]); 
        if(j!=2)
          printf(" |");            
      }
      printf("\n");
    }    
       
}



int pode_jogar(int i, int j, char m[][TAM]){
  int p = 0;
  if(i-1>=0 && i-1<=2 && j-1>=0 && j-1<=2)
    p = 1;  
  if(m[i-1][j-1]!='X' && m[i-1][j-1]!='O' && p == 1)
    return 1;
  else
    return 0;  
}
int ganhou_jogo(char m[][TAM]){
  int contx = 0, contO = 0, contx1 = 0, contO1 = 0;
  int somatestex = 0, somatesteo = 0, empate = 0;
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      if(m[i][j]=='X')
          empate++;
        else if(m[i][j]=='O')
          empate++;    
      if(i == j){
        if(m[i][j]=='X')
          contx++;
        else if(m[i][j]=='O')
          contO++;              
      }
      if(j+i == TAM-1){
        if(m[i][j]=='X')
          contx1++;
        else if(m[i][j]=='O')
          contO1++;  
      }
       
    }
  }
  int l = 0;
  
  while(l<3){
    for(int j= 0; j<3; j++){
      if(m[l][j]=='X')
        somatestex++;
      else if(m[l][j]=='O')
        somatesteo++;
    }
     if(somatesteo==3 || somatestex==3)
      break;
    somatesteo = 0;
    somatestex = 0; 
    l++;
  }
 
  int somatesteo2 = 0;
  int somatestex2 = 0;
  int c = 0;
  while(c<3 ){
    for(int j= 0; j<3; j++){
      if(m[j][c]=='X')
        somatestex2++;
      else if(m[j][c]=='O')
        somatesteo2++;        
    }   
    if(somatesteo2==3 || somatestex2==3)
      break;
    somatesteo2 = 0;
    somatestex2 = 0; 
    
    c++;
  }
  if(contx==3 || contO==3 || contO1 == 3 || contx1 == 3 || somatesteo == 3 || somatestex == 3 || somatesteo2 == 3 || somatestex2 ==3)
    return 1; 
  else if(empate == 9)
    return -1; 
  else
    return 0;
}



