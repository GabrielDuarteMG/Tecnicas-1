#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Deus e Fiel!
    Codigo feito por Gabriel Duarte;
    09/2017
*/
void EscolherMenu(int x,int exec);
void Menu();
void Limpar();
void Ex1(){
    printf("Exercicio 1 - SOMA DE 2 NUMEROS\n\n");
    int x,y;
    printf("Digite o primeiro numero: ");
    scanf("%d",&x);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&y);
    printf("\nResultado: %d",x+y);
    EscolherMenu(0,1);
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
    EscolherMenu(0,2);
}
void Ex3(){
    printf("Exercicio 3 - PAR OU IMPAR\n\n");
    int x;
    printf("Digite o numero x: ");
    scanf("%d",&x);
    if (x% 2 == 0)
        printf("%d Numero par",x);
    else
        printf("%d Numero Impar",x);
    EscolherMenu(0,3);
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
    EscolherMenu(0,4);
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
    EscolherMenu(0,5);
}
void Ex6(){
    printf("Exercicio 6 - VELOCIDADE MEDIA\n\n");
float distancia, tempo, velocidade;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f",&distancia);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f",&tempo);
    velocidade = distancia/tempo;
    printf("Velocidade media foi de %.2f km por hora",velocidade);
    EscolherMenu(0,6);
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
    EscolherMenu(0,7);
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
		printf("O numero maior: %d\n",x);
	}
	if ((y>x) && (y>z)){
		printf("O numero maior: %d\n",y);
	}
	if ((z>x) && (z>y)){
		printf("O numero maior : %d\n",z);
	}
	if (x == y && x == z){
		printf("O numero maior : %d\n",x);
	}
	if ((x==y) && (x>z)){
		printf("O numero maior : %d\n",x);
	}
	if ((x==z) && (x>y)){
		printf("O numero maior : %d\n",x);
	}
	if ((z==y) && (y>x)){
		printf("O numero maior : %d\n",y);
	}
    EscolherMenu(0,8);
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
    EscolherMenu(0,9);
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
    EscolherMenu(0,10);
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
    EscolherMenu(0,11);

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
    EscolherMenu(0,12);

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
    EscolherMenu(0,13);

}
void Ex90(){
    printf("Exercicio 90 - PONTO EXTRA: Converter Decimal para octal\n\n");
       int x;
	int octal[100],y,Rep;
	y =1;
	printf("Digite o decimal: ");
	scanf("%d",&x);
	if(x <= 0){
      	printf("[ERROR] Numero inserido> %d",x);
	}
    else{
        while(x!=0) {
            octal[y++]= x % 8;
            x = x / 8;
        }
        printf("Numero octal> ");
        for (Rep = y -1 ;Rep> 0;Rep--)
        printf("%d",octal[Rep]);
    }

    EscolherMenu(0,90);
}
void Ex14(){
    printf("Exercicio 14 - MEDIA DE NOTAS DIGITADAS\n\n");
	int notas;
    printf("Digite a quantidade de notas: ");
    scanf("%d",&notas);
    int a[notas];
    int y,x,result;
    x = 0;
    for(y= 0;y != notas; y++){
    printf("\nDigite a nota %d de %d: ",y+ 1,notas);
    scanf("%d",&a[y]);
    x = x + a[y];
    }
    result = x/y;
    if(result >= 60)
        printf("\nMedia das notas= %d\nCandidato aprovado\n\nNotas digitadas: ",result);
    else
        printf("\nMedia das notas= %d\nCandidato reprovado\n\nNotas digitadas: ",result);
    for(y= 0;y != notas; y++)
        printf("%d,",a[y]);
    EscolherMenu(0,14);
}
void Ex15(){
    printf("Exercicio 15 - LOTERIA\n");
    int usuario[6];
    int numeros[6];
    int y,x, Acertos;
    y = 0;
    Acertos = 0;
    srand( (unsigned)time(NULL) );
    while(6 != y){
        x = rand();
        if(x <= 55&& x >= 1){
            numeros[y] = x;
            printf("\nDigite o numero %d de 6(Entre 1 e 55): ",y + 1);
            scanf("%d",&usuario[y]);
            if(usuario[y] > 55) usuario[y] = 0;
            else{
                if(usuario[y] == x)Acertos++;
                y++;
            }
        }
    }
    printf("\nVoce acertou: %d numeros",Acertos);
    if(Acertos == 6)
        printf("\nGanhou Tudo!!\n\n\nNumeros Gerados: ");
    else if(Acertos == 5)
        printf("\nGanhou quina!!\n\n\nNumeros Gerados: ");
    else if(Acertos == 4)
        printf("\nGanhou quadra!!\n\n\nNumeros Gerados: ");
    else if(Acertos == 3)
        printf("\nQuase...\n\n\nNumeros Gerados: ");
    else
        printf("\nNao foi hoje...\n\n\nNumeros Gerados: ");
    for(y=0;6 != y;y++)
        printf("%d,",numeros[y]);
        printf("\nNumeros digitados:");
    for(y=0;6 != y;y++)
        printf("%d,",usuario[y]);
    EscolherMenu(0,15);
}
void Ex91(){
    printf("Exercicio 91 - PONTO EXTRA: Calcular fatorial\n\n");
    int numero,v1, v2,v3,x;
    printf("Digite o numero para calculo: ");
    scanf("%i",&numero);
    if(numero > 0){
        v2=1;
        v1=1;
        v3=0;
        for(x=1;x<=numero;x++){
            v3=v2*v1;
            v2=v3;
            v1=v1+1;
        }
        printf("\nResultado= %i\n\n",v3);
    }
    else{
        printf("\nNumero inserido menor que 1");
    }
    EscolherMenu(0,91);
}
void Limpar(){printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}

void EscolherMenu(int x,int exec){
    int f;
    if(x == 1)
        printf("Exercicio nao encontrado. \n\n");
    else
        printf("\n\n Exercicio executado.");
    printf("\n\nVoce Deseja\n0-Sair\n1-Menu\n2-Repetir o exercicio\n>");
    scanf("%d",&f);
    if(f==1){
        Limpar();
        Menu();
    }
    else if(f == 2){
        Limpar();
        switch(exec){
        case 0: Menu(); break;
        case 1:Ex1() ;break;
        case 2:Ex2() ;break;
        case 3:Ex3();break;
        case 4:Ex4();break;
        case 5:Ex5();break;
        case 6:Ex6();break;
        case 7:Ex7();break;
        case 8:Ex8();break;
        case 9:Ex9();break;
        case 10:Ex10();break;
        case 11:Ex11();break;
        case 12:Ex12();break;
        case 13:Ex13();break;
        case 90:Ex90();break;
        case 14: Ex14();break;
		case 15: Ex15();break;
        case 91:Ex91();break;
        default:Menu();break;
        }
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
    printf("\nExercicio 14 - MEDIA DE NOTAS DIGITADAS");
	printf("\nExercicio 15 - LOTERIA");
    printf("\nExercicio 90 - PONTO EXTRA: Converter Decimal para octal");
    printf("\nExercicio 91 - PONTO EXTRA: Calcular fatorial");
    printf("\n\nIr para exercicio: ");
    scanf("%d",&opcao);
    Limpar();
    switch(opcao){
    case  1:
        Ex1() ;break;
    case 2:
        Ex2();break;
    case  3:
        Ex3() ;break;
    case 4:
        Ex4();break;
    case  5:
        Ex5();break;
    case 6:
        Ex6();break;
    case  7:
        Ex7();break;
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
	case 14: Ex14();break;
			case 15: Ex15();break;
	 case 90:
        Ex90();break;
        	 case 91:
        Ex91();break;
    default:
    EscolherMenu(1,0);
    }
}

void main(){
    printf("Tecnicas de programacao");
    printf("\nFacudade: UNIPAC");
    printf("\nAluno: Gabriel Duarte dos Santos");
    printf("\nProfessor: Diego Alves da Silva");
    printf("\nPeriodo: Primeiro\n");
    Menu();
}

