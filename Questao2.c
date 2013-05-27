#include<stdio.h>
void produto_matrizes(int n,int m,int l,float matriz1[n][m],float matriz2[m][l],float matriz3[n][l]){
  int i,k,t,x,aux=0;
  for(i=0;i<n;i++){
    for(k=0;k<l;k++){
      for(x=0;x<m;x++){
	for(t=0;t<l;t++){
	  if(t==x)
	    aux+=matriz1[i][x]*matriz2[x][k];
	}
      }
      matriz3[i][k]=aux;
      aux=0;
      printf("%f ",matriz3[i][k]);
    }
    printf("\n");
  }
}
int main(){
  int i,j,k,x,y;
  printf("digite a quantidade de linhas da  Matriz 1:\n");
  scanf("%i",&i);
  printf("digite a quantidade de colunas da Matriz 1:\n");
  scanf("%i",&j);
  float mat1[i][j];
  printf("Preencha a Matriz 1:\n");
  for(x=0;x<i;x++){
    for(y=0;y<j;y++){
      scanf("%f",&mat1[x][y]);
    }
  }
  printf("digite a quantidade de colunas da matriz 2:\n");
  scanf("%i",&k);
  float mat2[j][k],mat3[j][k];
  printf("Preencha a Matriz 2:\n");
  for(x=0;x<j;x++){
    for(y=0;y<j;y++){
      scanf("%f",&mat2[x][y]);
    }
  }
  produto_matrizes(i,j,k,mat1,mat2,mat3);
  return 0;
}


