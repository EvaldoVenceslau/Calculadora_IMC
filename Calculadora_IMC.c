/* Faculdade Senac
Alunos: Anthony Amaral, Evaldo Venceslau e Wilson Gomes
professor: Heuryk wylk
projeto: Calculadora */

/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para calcular o fatorial de um número
float fatorial(float n){
  // SE n é 0 ou 1, retorna 1
  if(n == 0 || n == 1)
        return 1;

    else
    // Caso contrário, calcula n! 
        return n * fatorial(n-1);
}

int main()
{
  int opcao;// Variável para armazenar a escolha da operação
  float n1, n2, resultado; // Variáveis para os números e o resultado das operações

  // Mostra as opções de operações para o usuário

  printf("Qual eh sua operacao:\n");

  printf("\n\t1- Adição:\n");


  printf("\n\t2- Subtração:\n");


  printf("\n\t3- Multiplicação:\n");


  printf("\n\t4- Divisão:\n");


  printf("\n\t5- Fatorial:\n");


  printf("\n\t6- Potenciação:\n");


  printf("\n\t7- Radiciação:\n");
  scanf("%d", &opcao);

  // Solicita os números para as operações
  printf("Digite um numero:\n");

  scanf("%f", &n1); // Formato e concatenação

  if(opcao != 5 && opcao != 7){

      printf("Digite outro numero:\n");
      scanf("%f", &n2);
  }

  // Executa a operação escolhida pelo usuário
    switch (opcao){
    case 1:
    resultado = n1 + n2;
    printf("O valor da soma e: %0.1f\n", resultado);
    break;

    case 2:
    resultado = n1 - n2;
    printf("O resultado da subtracao e: %0.1f\n", resultado);
    break;

    case 3:
    resultado = n1 * n2;
    printf("O resultado da multiplicacao e: %0.1f\n", resultado);
    break;

    case 4:
    resultado = n1 / n2;
    printf("O valor da divisao e: %0.1f\n", resultado);
    break;

    case 5: // Calcula o fatorial do número inserido
      if (n1 < 0){
        printf ("Erro: Valor idefinido");
      } else {
        resultado = fatorial ((float)n1);
        printf("Resultado: %0.0f\n", (float)resultado);
      }
      break;

      case 6: // Calcula a potência de n1 elevado a n2
      resultado = pow(n1, n2);
      printf("O valor da Potenciacao e:%0.1f\n", resultado);
      break;

       case 7: // Calcula a raiz quadrada de n1
      if (n1 < 0){
        printf("Erro: Valor indeterminado!\n");
      }else{
        resultado = sqrt(n1);
        printf("Resultado: %0.1f\n", resultado);
      }
      break;

      default:

      printf("Operação invalida!\n"); // Mensagem p/ operações inválidas

}
    return 0;
}
