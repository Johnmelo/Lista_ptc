#include<stdio.h>
struct Data{
  float dia;
  float mes;
  int ano;
};
int main(){
  struct Data data[2];
  int i,control=0;
  for(i=0;i<2;i++){
    printf("Digite Data %i dd/mm/aaaa :\n",i+1);
    printf("Digite o dia:\n");
    scanf("%f",&data[i].dia);
    while((data[i].dia<1)||(data[i].dia>31)){
      printf("DIA INVALIDO! DIGITE NOVAMENTE O DIA:\n");
      scanf("%f",&data[i].dia);
    }
    printf("Digite o mes:\n");
    scanf("%f",&data[i].mes);
    while(data[i].mes<1||data[i].mes>12){
      printf("MES INVALIDO! DIGITE NOVAMENTE O MES:\n");
      scanf("%f",&data[i].mes);
    }
    printf("Digite o ano:\n");
    scanf("%i",&data[i].ano);
    if((data[i].ano % 4 == 0 )&&(data[i].ano % 400 == 0 || data[i].ano % 100 != 0)){
      if((data[i].mes==2&&data[i].dia>29)||(data[i].mes==4&&data[i].dia>30)||(data[i].mes==6&&data[i].dia>30)||(data[i].mes==9&&data[i].dia>30)||(data[i].mes==10&&data[i].dia>30)){
	printf("DIA NÃO EXISTE!\n");
	control=-1;
	break;
      }
    }
    else{
      if((data[i].mes==2&&data[i].dia>28)||(data[i].mes==4&&data[i].dia>30)||(data[i].mes==6&&data[i].dia>30)||(data[i].mes==9&&data[i].dia>30)||(data[i].mes==10&&data[i].dia>30)){
	printf("Dia não existe!\n");
	control=-1;
	break;
      }
    }
  }
  if(control!=-1){
    if((data[1].ano==data[0].ano)&&(data[1].mes==data[0].mes)&&(data[1].dia==data[0].dia)){
      printf("DATAS IGUAIS!!!\n");
    }
    else{
      if((((data[0].ano==data[1].ano)&&(data[0].mes==data[1].mes)&&(data[0].dia<data[1].dia)))||((data[0].ano==data[1].ano)&&((data[0].dia!=data[1].dia||(data[0].dia==data[1].dia)))&&(data[0].mes<data[1].mes))||((data[0].ano<data[1].ano)&&((data[0].dia!=data[1].dia||(data[0].dia==data[1].dia))&&((data[0].mes!=data[1].mes)||(data[0].mes==data[1].mes))))){
	printf("\n1\n");
      }
      else{
	printf("\n0\n");
      }
    }
  }
  for(i=0;i<2;i++){
    printf("%1.f/%1.f/%i\n",data[i].dia,data[i].mes,data[i].ano);
  }
}
    