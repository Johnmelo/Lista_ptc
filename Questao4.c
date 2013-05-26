#include<stdio.h>
#include<string.h>
void palindromo(int x,char* p,char* pala){
  int i,j,k=x-1,control=1;
  char polo[x];
  for(i=0;i<x;i++){
    polo[k]=p[i];
    k--;
  }
  for(j=0;j<x;j++){
    if(polo[j]!=p[j]){
      control=0;
    }
  }
  printf("%s ",pala);
  if(control==1){
    printf("é palindromo");
  }
  else{
    printf("não é palindromo");
  }
}
int main(){
  int k,i;
  char palavra[51];
  scanf(" %50[^\n]",palavra);
  k=strlen(palavra);
  int aux=0;
  char p[aux];
  for(i=0;i<k;i++){
    if((palavra[i]!=' ')&&(((palavra[i]>=65)&&(palavra[i]<=90))||((palavra[i]>=97)&&(palavra[i]<=122)))){
      p[aux]=palavra[i];
      aux++;
    }
  }
  palindromo(aux,p,palavra);
  return 0;
}

