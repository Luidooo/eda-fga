#include <stdio.h>

int main()
{
  printf(" Estruturas de Dados e Algoritmos de Ordenacao\n\n"
         "  Este texto tem como foco aprendermos sobre:\n"
         "                                Complexidade\n"
         "                                Caracteristicas\n"
         "                                Propriedades\n"
         " De cada Estrutura abstrata de dados(TADS) e de\n"
         " cada metodo de ordenacao atraves de algoritmos.\n");

  printf(" Primeiramente eh importante conceituarmos e explicarmos o que sao cada topico.\n\n"
         "  Complexidade:\n"
         "    A complexidade de um algoritmos ou de um codigo consiste em analisar\n"
         "   como o mesmo se comporta quando n tende a algo, sendo n a quantidade\n"
         "   de intrucoes do algoritmo(passos executaveis).\n"
         "    Para analisarmos a complexidade de um algoritmo utilizamos uma notacao\n"
         "   em especifico, a notacao Big O, ou Ozao, basicamente consiste em analisarmos\n"
         "   o n tendendo ao infinito. A complexidade denominada assintotica desconsidera\n"
         "   as constantes e termos de menor crescimento, por exemplo, 3logN = logN\n\n.");

  printf("  Classes de comportamento de complexidade Assintotico\n"
         "   Complexidade Constante f(n) = O(1)\n"
         "    As instrucoes do algoritmo sao executadas um numero fixo de vezes.\n"
         "    Uso do algoritmo independe da entrada f(n)\n"
         "   Complexidade linear f(n) = O(n)\n"
         "     Em geral, um pequeno trabalho eh realizado sobre cada numero da entrada\n"
         "     O tempo de execucao aumenta de acordo com o tamanho da entrada"
         "     Melhor situacao para algoritmos que precisam produzir n elementos,seja de\n"
         "     entrada ou saida\n"
         "   Complexidade Logaritmica f(n) = O(LogN)"
         "    Tipico em algoritmos que transformam um problema em outros menores\n"
         "    Tempo de execucao consideravelmente pequeno, otimo para grandes entradas\n"
         "    Quando n = 1 milhao a saida n = 20\n"
         "   Complexidade linar Logaritmica f(n) = O(NlogN)\n"
         "    Tipico em algoritmos que transformam um problema em outros menores, e resolvem\n"
         "    cada problema e agrupa as solucoes\n"
         "    Quando o n = 1 milhao a saida n = 20 milhoes"
         "   Complexidade QUadratica f(n) = O(n²)"
         "    Tipico de algoritmos com muitas comparacoes, pouco otimizado para entradas grandes\n"
         "    Quando n = 1 milhao o n de saida = 1 bilhao\n"
         "    Util para problemas de tamanho relativo pequeno\n"
         "    Sempre que n dobra o tempo de execucao quadruplica\n"
         "   Complexidade Exponencial f(n) = 2^n\n"
         "    Geralmente nao soa uteis sobre o ponto de vista pratico\n"
         "    Geralmente associados a resolucao de problemas por forca bruta\n"
         "    Quando n = 20 o n de saida n = 1 milhao(inverso do log)\n"
         "    O(n!) tambem se considera algoritmo exponencial, apesar de ter comportamento\n"
         "    bem pior que O(2^n)");
  return 0;
}
