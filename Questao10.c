#include<stdio.h>
int fator(int x){
  if((x==0)||(x==1)){
    return 1;
  }
  else{
      return x*fator(x-1);
  }
}
void fator_vetor(int* a){
  int i,j,B[10];
  for(i=0;i<10;i++){
    B[i]=fator(a[i]);
    printf("%i ",B[i]);
  }
}
int main(){
  int A[10], i;
  for(i=0;i<10;i++){
    scanf("%i",&A[i]);
  }
  fator_vetor(A);
  return 0;
}