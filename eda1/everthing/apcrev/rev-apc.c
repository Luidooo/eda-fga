#include <stdio.h>

int main()
{

  printf("\n\n ALgoritmos");
  printf("\n  Para ciencia da computacao, algoritmo tem significado\n"
         "  De: Sequencia de intrucoes(passo a passo)\n"
         "  Ornedada\n"
         "  Finita\n"
         "  Nao ambigua\n"
         "  Que produz, em tempo finito, a solucao do problema\n");

  
  printf("\n Vetor(Array) Unidimensional\n"
         "  1 variavel --> n valores do mesmo tipo\n"
         "  Declaracao:\n"
         "  -> tipo_da_variavel[n]\n"
         "  tipo_da_variavel = Tipo da variavel(int,char ou float)\n"
         "  n = quantidade de posicoes, deve ser uma constante inteira\n"
         "  Se acessa pelo indice: n-1(comeca em indice = 0)\n");  

  printf("\n Matrizes ou Arrays multidomensionais\n"
         "  acessar os elementos = nome da variavel\n"
         "                       deslocamento vertical\n"
         "                       deslocamento horizontal\n"
         "  matriz[linha][coluna]\n"
         "  declaracao int a[3][5] = {{n,...,5n}, {x,...,5x}, {y,...,5y}}\n");

  printf("\n Strings(sequencia de caracteres)"
         "  Devem terminar com \"\\0\"\n"
         "  declaracao: char x[n]= \"nome_string;\"\n"
         "  O compilador coloca automaticamente o \"\\0\"\n"
         "  Lembresse de adicionar 1 no tamanho do array\n");

  printf("\n Estruturas de Dados Heterogeneos\n"
         "  Agrupa varias variavies e de varios tipos em uma unica estrutura\n"
         "  a");
  return 0;
}
