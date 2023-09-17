#include <stdio.h>

int main()
{

  printf(" Memoria fisica\n"
         "  Conjunto de componentes eletronicos capazes de conservar estados\n"
         "  1 = alta tensao 0 = baixa tensao\n"
         "  Computador = [sistema binario(dados)]\n"
         "                        +\n"
        "              [algebra booleana(logica)]\n"
         "                        +\n"
         "           [circuitos de comutacao de estados]\n");

  printf("\n Alocacao de memoria para processos\n"
         "  Processo = programa em execucao\n"
         "  Cada programa em execucao(processo) aloca uma porcao de memoria\n"
         "  Cada porcao se organiza por segmentos\n"
         "  Os segmentos sao divididos em\n"
         "  Stack: um bloco sequencial, onde se armazena variaveis locais e enderecos de retorno\n"
         "  Heap:  Memoria mais flexivel, capaz de armazenar dados onde haver espaco disponivel no sistema\n"
         "  Data:  Variaveis globais inicializadas ou nao\n"
         "  Text:  O codigo em si\n"
         "  ordem de tamanho dos dados maiores --> menores\n");
  return 0;
}
