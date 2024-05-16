#include <stdio.h>
#include <stdlib.h>

int main (){
    
	float raio;	 
	printf ("Digite o valor do raio da circuferencia: \n ");
	scanf ("%f \n \n ", &raio);
	
    float diametro = 2 * raio;
    float comprimento = 2 * 3.14 * raio;
    float area = 3.14 * raio * raio;
    
    
    
	printf("Diametro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Area: %.2f\n", area);
	 
	return 0;
	
	
}

