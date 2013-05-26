#include<stdio.h>
struct Pessoa{
  char* nome;
  char* sexo;
  char* estado_civil;
  char* idade;
} ;
int main(){
  struct Pessoa pessoa;
  pessoa.nome="Jonathas";
  pessoa.sexo="Masculino"; 
  pessoa.estado_civil="Solteiro";
  pessoa.idade="20 anos";
  printf("NOME: %s\nSEXO: %s\nESTADO CIVIL: %s\nIDADE:  %s\n",pessoa.nome,pessoa.sexo,pessoa.estado_civil,pessoa.idade);
  return 0;
}