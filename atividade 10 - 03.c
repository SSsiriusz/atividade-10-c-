#include <stdio.h>
#include <stdlib.h>

int main (){
	float base;
	float altura;
	
		 
	printf ("Escreva o valor da base: ");
	scanf ("%f", &base);
	printf ("Escreva o valor da alutra: ");
	scanf ("%f", &altura);
	
	
	float total = base * altura; 
	
	printf ("A area do triangulo em metros é: %f", total / 2);

	 
	return 0;
	
	
}

