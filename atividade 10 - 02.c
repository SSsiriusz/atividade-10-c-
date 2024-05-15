#include <stdio.h>
#include <stdlib.h>

int main (){
	float nota1;
	float nota2;
	float nota3;
	float nota4;
		 
	printf ("Escreva a primeira nota: ");
	scanf ("%f", &nota1);
	printf ("Escreva a segunda nota: ");
	scanf ("%f", &nota2);
	printf ("Escreva a terceira nota: ");
	scanf ("%f", &nota3);
	printf ("Escreva a quarta nota: ");
	scanf ("%f", &nota4);
	
	float total = nota1+nota2+nota3+nota4;
	
	float media = (total / 4); 
	
	printf ("Nota total: %f \n",total);
	printf ("media total: %f \n",media);
	 
	return 0;
	
	
}

