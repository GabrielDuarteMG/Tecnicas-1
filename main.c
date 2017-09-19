#include <stdio.h>
#include <stdlib.h>
/*Deus é Fiel!
    Codigo feito por Gabriel Duarte;
    09/2017
*/
void main(){
      printf("Tecnicas de programacao");
    printf("\nFacudade: UNIPAC");
    printf("\nAluno: Gabriel Duarte dos Santos");
    printf("\nProfessor: Diego Alves da Silva");
    printf("\nPeriodo: Primeiro\n");
    Menu();
}
void Limpar(){printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}
void EscolherMenu(int x){
    float f;
    if(x == 1)
        printf("Exercicio nao encontrado. \n\n");
    else
        printf("\n\n Exercicio executado.");
    printf("\n\nDeseja voltar ao menu? 1 Se sim, 0 Se nao: ");
    scanf("%f",&f);
    if(f==1){
        Limpar();
        Menu();
    }
}
void Menu(){
    int opcao;
    printf(" \n            LISTA DE EXERCICIOS\n\n\n");
    printf("\nExercicio 1 - SOMA DE 2 NUMEROS");
    printf("\nExercicio 2 - EXIBIR PROXIMO NUMERO PAR");
    printf("\nExercicio 3 - PAR OU IMPAR");
    printf("\nExercicio 4 - POSITIVO OU NEGATIVO");
    printf("\nExercicio 5 - CALCULAR IMC");
    printf("\nExercicio 6 - VELOCIDADE MEDIA");
    printf("\nExercicio 7 - SOMA DE 3 NOTAS");
    printf("\nExercicio 8 - QUAL NUMERO MAIOR");
    printf("\nExercicio 9 - PROXIMOS 10 PARES");
    printf("\nExercicio 10 - SOMA DE 10 NUMEROS DIGITADOS PELO USUARIO");
    printf("\nExercicio 11 - MEDIA DE 10 NUMEROS DIGITADOS PELO USUARIO");
    printf("\nExercicio 12 - SOMA DE 10 NUMEROS DIGITADOS PELO USUARIO IGNORANDO OS NEGATIVOS");
    printf("\nExercicio 13 - SOMA DE 5 NUMEROS IMPARES DIGITADOS PELO USUARIO");
    printf("\n\nIr para exercicio: ");
    scanf("%d",&opcao);
    Limpar();
    switch(opcao){
    case  1:
        Ex1();break;
    case 2:
        Ex2();break;
    case  3:
        Ex3();break;
    case 4:
        Ex4();break;
    case  5:
        Ex5();break;
    case 6:
        Ex6();break;
    case  7:
        Ex7();
        break;
    case 8:
        Ex8();break;
    case  9:
        Ex9();break;
    case 10:
        Ex10();break;
    case  11:
        Ex11();break;
    case 12:
        Ex12();break;
    case 13:
        Ex13();break;
    default:
    EscolherMenu(1);
    }
}

void Ex1(){
    printf("Exercicio 1 - SOMA DE 2 NUMEROS\n\n");
    int x,y;
    printf("Digite o primeiro numero: ");
    scanf("%d",&x);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&y);
    printf("\nResultado: %d",x+y);
    float f;

}
void Ex2(){
    printf("Exercicio 2 - EXIBIR PROXIMO NUMERO PAR\n\n");
    int x;
    printf("Digite um numero x: ");
    scanf("%d",&x);
    if (x% 2 == 0)
        printf("Proximo Par: %d",(x+2));
    else
        printf("Proximo Par: %d",(x+1));
    float f;
    EscolherMenu(0);
}
void Ex3(){
    printf("Exercicio 3 - PAR OU IMPAR\n\n");
    int x;
    printf("Digite o número x: ");
    scanf("%d",&x);
    if (x% 2 == 0)
        printf("%d Numero par",x);
    else
        printf("%d Numero Impar",x);
    float f;
    EscolherMenu(0);
}
void Ex4(){
    printf("Exercicio 4 - POSITIVO OU NEGATIVO\n\n");
    int x;
    printf("Digite o numero x: ");
    scanf("%d",&x);
    if (x < 0)
        printf("%d Numero negativo",x);
    else
        printf("%d Numero positivo",x);
           float f;
    EscolherMenu(0);
}
void Ex5(){
    printf("Exercicio 5 - CALCULAR IMC\n\n");
    float peso, altura, imc;
    printf("Digite  peso em kg: ");
    scanf("%f",&peso);
    printf("Digite altura em metros: ");
    scanf("%f",&altura);
    imc = peso / (float)  (altura*altura);
    printf("IMC= %.2f",imc);
       float f;
    EscolherMenu(0);
}
void Ex6(){
    printf("Exercicio 6 - VELOCIDADE MEDIA\n\n");
float distancia, tempo, velocidade;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f",&distancia);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f",&tempo);
    velocidade = distancia/tempo;
    printf("Velocidade média foi de %.2f km por hora",velocidade);
       float f;
    EscolherMenu(0);
}
void Ex7(){
        printf("Exercicio 7 - SOMA DE 3 NOTAS\n\n");
        float n1, n2, n3, soma;
    printf("Digite nota 1: ");
    scanf("%f",&n1);
    printf("Digite nota 2: ");
    scanf("%f",&n2);
    printf("Digite nota 3: ");
    scanf("%f",&n3);
    soma = n1 + n2 + n3;
    if (soma >= 60.0) {
        printf("\nAprovado com %.2f pontos",soma);
    }else {
        printf("\nReprovado com %.2f pontos",soma);
    }
   float f;
    EscolherMenu(0);

}
void Ex8(){
    printf("Exercicio 8 - QUAL NUMERO MAIOR\n\n");
	int x,y,z;
    printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	    printf("Digite o segundo numero: ");
	scanf("%d",&y);
	    printf("Digite o terceiro numero: ");
	scanf("%d",&z);
	if ((x>y) && (x>z)){
		printf("O número maior é: %d\n",x);
	}
	if ((y>x) && (y>z)){
		printf("O número maior é: %d\n",y);
	}
	if ((z>x) && (z>y)){
		printf("O número maior é: %d\n",z);
	}
	if (x == y && x == z){
		printf("O número maior é: %d\n",x);
	}
	if ((x==y) && (x>z)){
		printf("O número maior é: %d\n",x);
	}
	if ((x==z) && (x>y)){
		printf("O número maior é: %d\n",x);
	}
	if ((z==y) && (y>x)){
		printf("O número maior é: %d\n",y);
	}
	   float f;
    EscolherMenu(0);
}
void Ex9(){

    printf("Exercicio 9 - PROXIMOS 10 PARES\n\n");
    printf("Digite um numero: ");
    int x,y;
    y=0;
    for(scanf("%i",&x); y < 10; x++){
        if(x % 2 == 0)
        {
            printf("%d ",x);
            y++;
        }
    }
       float f;
    EscolherMenu(0);
}
void Ex10(){
    printf("Exercicio 10 - SOMA DE 10 NUMEROS DIGITADOS PELO USUARIO\n\n");
    int x,y,z;
    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      z = z+x;
      y++;
      if(y == 10)printf("\n\n\nSoma de todos os valores = %i",z);
      }
         float f;
    EscolherMenu(0);
}
void Ex11(){
      printf("Exercicio 11 - MEDIA DE 10 NUMEROS DIGITADOS PELO USUARIO\n\n");
       int x,y,z;
    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      z = z+x;
      y++;
      if(y == 10){
            z = z /10;
            printf("\n\n\nA media dos 10 valores  = %i",z);
      }
      }
         float f;
    EscolherMenu(0);

}
void Ex12(){
      printf("Exercicio 12 - SOMA DE 10 NUMEROS DIGITADOS PELO USUARIO IGNORANDO OS NEGATIVOS\n\n");
    int x,y,z;
    y=0;
    z=0;
    while(y != 10){
    printf("Digite o numero %d de 10: ", y+1);
      scanf("%i",&x);
      if(x >0){
      z = z+x;
      y++;}
      if(y == 10){
            z = z /10;
            printf("\n\n\nA media dos 10 valores  = %i",z);
      }
      }
         float f;
    EscolherMenu(0);

}
void Ex13(){
      printf("Exercicio 13 - SOMA DE 5 NUMEROS IMPARES DIGITADOS PELO USUARIO\n\n");
      int x,y,z;
    y=0;
    z=0;
    while(y != 5){
        printf("Digite o numero impar %d de 5: ", y+1);
        scanf("%i",&x);
        if(x %2 == 1){
            z = z+x;
            y++;
        }
        if(y == 5){
            printf("\n\n\nA soma dos 5 valores impares = %i",z);
        }
    }
       float f;
    EscolherMenu(0);

}
