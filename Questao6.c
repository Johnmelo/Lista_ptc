#include<stdio.h>
struct Pessoa{
  char* nome;
  char* sexo;
  char* estado_civil;
  int idade;
} ;
int main(){
  struct Pessoa pessoa;
  pessoa.nome="Jonathas";
  pessoa.sexo="Masculino"; 
  pessoa.estado_civil="Solteiro";
  pessoa.idade= 20;
  printf("NOME: %s\nSEXO: %s\nESTADO CIVIL: %s\nIDADE:  %i\n",pessoa.nome,pessoa.sexo,pessoa.estado_civil,pessoa.idade);
  return 0;
}
