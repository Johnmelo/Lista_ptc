#include <stdio.h>
void produto_arranjos(int n,int m,double matriz[n][m],double vetor[m]){
  int x,y,j,i;
  double aux=0;
  for(i=0;i<=n-1;i++){
    for(j=0;j<1;j++){
      for(x=0;x<=m-1;x++){
	for(y=0;y<1;y++){
	  aux+=matriz[i][x]*vetor[x];
	}
      }
    }
    printf("%lf\n",aux);
    aux=0;
  }
}
int main(){
  int i,j=0,x,y;
  printf("digite a quantidade de linhas da matriz:\n");
  scanf("%i",&i);
  printf("digite a quantidade de colunas da matriz:\n");
  scanf("%i",&j);
  double matriz[i][j],vetor[j];
  printf("preencha sua matriz:\n");
  for(x=0;x<=i-1;x++){
    for(y=0;y<=j-1;y++){
      scanf("%lf",&matriz[x][y]);
    }
  }
  printf("preencha seu vetor:\n");
  for(x=0;x<=j-1;x++){
    scanf("%lf",&vetor[x]);
  }
  produto_arranjos(i,j,matriz,vetor);
}
