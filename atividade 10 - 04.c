#include <stdio.h>
#include <stdlib.h>

int main (){
	float valor1;
	float valor2;
		 
	printf ("Escreva o valor1: ");
	scanf ("%f", &valor1);
	
	printf ("Escreva o valor2: ");
	scanf ("%f", &valor2);
	
    float total = valor1 - valor2;
    
    printf ("A diferença entre valores sao: %f",total);
	 
	return 0;
	
	
}

