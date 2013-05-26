#include<stdio.h>
void troca(char cadeia[30]){
int i;
for(i=0;i<30;i++){
if((cadeia[i]>=65)&&(cadeia[i]<=90)){
cadeia[i]+=32;
}
}
printf("%s",cadeia);
}
int main(){
char cadeia[30];
scanf(" %[^\n]",cadeia);
troca(cadeia);
return 0;
}

