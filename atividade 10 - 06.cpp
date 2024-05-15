#include <stdio.h>
#include <stdlib.h>

int main (){
	float valor1;
		 
	printf ("Escreva o seu peso atual em kilos: \n ");
	scanf ("%f \n \n ", &valor1);
	
    
    float pesoemgramas = (valor1 * 1000);
    
    
	printf ("Seu peso em gramas sao: %f\n \n ",pesoemgramas);
	 
	return 0;
	
	
}

