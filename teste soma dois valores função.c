//2.Escreva uma fun��o para calcular a soma de dois valores inteiros. 
//Essa fun��o n�o recebe nenhum par�metro, porque ler os dois valores inteiros dentro dela, mais retorna a soma, 
//que deve ser impressa na fun��o main. 
//Construa um arquivo .c, com include, prot�tipo da fun��o, fun��o main, e a declara��o da fun��o (soma1.c)

#include <stdio.h>

void soma(void);

int main(){ 
soma(); 	
return 0;
}

void soma(void){
     float num1, num2, resultado;
	     printf("\nDigite o primeiro valor: ");
              scanf("%f", &num1);
                 printf("\nDigite o segundo valor: ");
                    scanf("%f", &num2);  
					resultado = num1 + num2;
					     printf("\nResultado: %.2f", resultado);
}


