#include<stdio.h>
#include<stdlib.h>
void mat_q(int x,int m[x][x]){
  int soma_p=0,i,j=x-1,k;
  for(i=0;i<x;i++){
    soma_p+=m[i][i];
  }
  for(i=0;i<x;i++){
    m[i][j]=soma_p;
    j--;
  }
  for(i=0;i<x;i++){
    for(k=0;k<x;k++){
      printf("%i ",m[i][k]);
    }
    printf("\n");
  }
}
int main(){
  int i,j,k,l;
  printf("linhas e colunas: ");
  scanf("%i",&i);
  j=i;
  int mat[i][i];
  printf("preencha:\n");
  for(k=0;k<i;k++){
    for(l=0;l<j;l++){
      mat[k][l]=rand()%100;
    }
  }
  mat_q(i,mat);
  return 0;
} 