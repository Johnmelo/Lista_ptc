#include<stdio.h>
void mat_q(int x,int a[x][x]){
  int k=0,y=0,i,soma[x],control=0;
  for(i=0;i<x;i++){
    soma[i]=0;
  }
  while(k<x){
    for(i=0;i<x;i++){
      soma[y]+=a[y][i];
    }
    y++;
    k++;
  }
  int aux=soma[0];
  for(i=0;i<x;i++){
    if(soma[i]!=aux){
      control=-1;
    }
  }
  if(control!=-1){
    k=0;
    y=0;
    for(i=0;i<x;i++){
    soma[i]=0;
    }
    while(k<x){
      for(i=0;i<x;i++){
	soma[y]+=a[i][y];
      }
      y++;
      k++;
    }
    for(i=0;i<x;i++){
      if(aux!=soma[i]){
	control=-1;
      }
    }
    if(control!=-1){
      int soma_d=0;
      for(i=0;i<x;i++){
	soma_d+=a[i][i];
      }
      if(soma_d!=aux){
	control=-1;
      }
      if(control!=-1){
	soma_d=0;
	for(i=x-1;i>=0;i--){
	  soma_d+=a[i][i];
	}
	if(soma_d==aux){
	  printf("Matriz quadrado magico\n");
	}
	else{
	  printf("Matriz não é quadrado magico\n");
	}
      }
      else{
	printf("Matriz não é quadrado magico\n");
      }
    }
    else{
      printf("Matriz não é quadrado magico\n");
    }
  }
  else{
    printf("Matriz não é quadrado magico\n");
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
	scanf("%i",&mat[k][l]);
      }
    }
    mat_q(i,mat);
    return 0;
  } 