#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor;
	int valor1;
	int valorNovo;
		 
	printf ("Digite primeiro numero: \n ");
	scanf ("%i", &valor);
	printf ("Digite segundo numero: \n ");
	scanf ("%i", &valor1);
	
    printf(" Primeiro Numero digitado : %i\n", valor);
    printf("Segundo Numero digitad0 : %i\n", valor1);
    
    valorNovo = valor;
    valor = valor1;
    valor1 = valorNovo;
	
	printf(" Os novos valores sao : %i\n", valor);
    printf("Os novos valores sao : %i\n", valor1); 
    
    
	 
	return 0;
	
	
}

