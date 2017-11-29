#include<stdio.h>
#include<stdbool.h>
int vetor[10], i, opc;
void main() {
  for (i = 0; i < 10; i++) {
    printf("\nDigite o valor %i de 10: ", i + 1);
    scanf("%d", & vetor[i]);
  }
  printf("Digite qual funcao deseja executar:  ");
  scanf("%i", & opc);
  switch (opc) {
  case 1:
    ExA();
    break;
  case 2:
    ExB();
    break;
  case 3:
    ExC();
    break;
  case 4:
    ExD();
    break;
  case 5:
    ExE();
    break;
  case 6:
    ExF();
    break;
  default:
    break;
  }
}
void ExA() {
  int n;
  printf("\nNumeros Digitados: ");
  for (n = 0; n != 10; n++) {
    printf("%d,", vetor[n]);
  }
}

void ExB() {
  int Var, maiorNumero = vetor[0];
  for (Var = 0; Var != 10; Var++) {
    if (vetor[Var] > maiorNumero)
      maiorNumero = vetor[Var];
  }
  printf("O maior numero digitado foi %d", maiorNumero);
}

void ExC() {
  int Var, maiorNumero = vetor[0];
  for (Var = 0; Var != 10; Var++) {
    if (vetor[Var] < maiorNumero)
      maiorNumero = vetor[Var];
  }
  printf("O menor numero digitado foi %d", maiorNumero);
}

void ExD() {
  int Var, media = 0;
  for (Var = 0; Var != 10; Var++) {
    media = vetor[Var] + media;
  }
  media = media / 10;
  printf("%d", media);
}

void ExE() {
  int Var1, Var2, Var3;
  printf("Digite o primeiro numero a ser calculado: ");
  scanf("%i", & Var1);
  printf("\nDigite o primeiro numero a ser calculado: ");
  scanf("%i", & Var2);
  Var3 = vetor[Var1] + vetor[Var2];
  printf("\nResultado da soma dos dois numeros: %i", Var3);
}

void ExF() {
  int numero, var;
  bool Existe;
  Existe = false;
  printf("Digite o numero para ver se esta no vetor: ");
  scanf("%i", & numero);
  for (var = 0;var != 10;var ++) {
    if (vetor[var] == numero)
      Existe = true;
  }
  if (Existe == true)
    printf("O vetor contem o numero %i", numero);
  else
    printf("O numero %i nao se encontra no vetor", numero);
}
