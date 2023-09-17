#include <stdio.h>
int main(){

  printf("------------------------------------------\n\t" 
         "Prova de EDA - estrutura de dados\n"
         "------------------------------------------\n\n");

  printf("\t Conteudos da prova 3\n\n \t"
         "Tipos Abstratos de dados\n \t \t"
         "Listas \n \t \t Pilhas \n \t \t"
         "Filas de Prioridades \n \t \t"
         "Arvores \n \n \t "
         "Algoritmos de ordenacao \n \t \t"
         "Quicksort \n \t \t Mergesort \n \t \t"
         "HeapSort \n \t \t Radix Sort \n \t \t"
         "CountSort\n\n \t Algoritmos de Busca \n \t \t"
         "Tabela de simbolos \n \t \t Busca binaria \n \t \t"
         "Arvore de busca binaria \n \n");
  printf("------------------------------------------\n\n\n");
  
  printf("  Tipos abstratos de dados(TAD)\n\n"
         "\t conjunto"
         "de dados que possuem "
         "operacoes bem definidas\n\n");
  printf("  Listas\n\n"
         "\t Uma representacao sequencial de objetos\n"
         " do mesmo tipo, armazenados na memoria" 
         " Ram do computador\n\n");
  printf("  Encadeadas\n\n "
         "\t Uma sequencia de celulas, com cada celula\n"
         "contendo um objeto(conteudo) e um apontador(ponteiro) para\n"
         "sua celula subsequente, formando assim uma estrutura\n"
         "onde toda celula possui o endereco da seguinte\n\n");
 printf("  Duplamente encadeadas\n\n "
         "\t Similar as Encadeadas, mas com apontador(ponteiro)\n"
         "para a celula subsequente e para a celula anterior\n\n");
printf("  Filas\n\n"
       "\t Estrutura que utiliza das listas para ter uma operacao bem\n"
       "definida de acesso aos dados, o sistema FIFO, Firt In - Firt Out\n"
       "O primeiro dado a entrar na lista sera o primeiro dado a Sair\n\n");
 printf("  pilhas\n\n"
        "\tEstrutura que utiliza das listas para ter operacoes bem\n"
        "definidas de acesso aos dados, o sistema LIFO, Last IN - first Out\n"
        "O ultimo dado a entrar na lista sera o primeiro a sair\n\n");
printf("Importante ter em mente que filas e pilhas adimitem remocao e insercao\n"
        "de elementos\n\n");
printf("  Arvores Binarias\n\n"
       "\tSao um conjunto de registros que sastifazem certa hierarquia, os nos(dados)\n"
       "tem dois apontadores(ponteiros), para direita e para esquerda\n\n"
       "\t  A tres maneiras de percorrer os dados de uma arvore\n\n"
       "\t  Pre ordem - raiz - esquerda - direita\n"
       "\t  IN ordem - esquerda = raiz - direita\n"
       "\t  Pos ordem - direita - esquerda - raiz\n\n");
printf("  Metodos de ordenacao eficientes\n\n"
       "  Merge sort\n\n"
       "\t A ideia do merge sort e seccionar o vetor em vetores menores\n"
       "ate chegarmos em vetores unitarios e vir juntando e organizando\n"
       "com base nos valores\n \n");
printf("O merge em composto de duas funcoes, a merge e a merge sort. A merge se responsabiliza\n"
       "por dividir o vetor em vetores menores e a merge sort por junta-lo novamente comparando\n"
       "cada valor e os ordenando\n\n");
  return 0;
}
