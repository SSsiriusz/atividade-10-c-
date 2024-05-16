#include <stdio.h>
#include <stdlib.h>

int main (){
    
	float fare;	 
	printf ("Escreva a temperatura em Fahrenheit : \n ");
	scanf ("%f \n \n ", &fare);
	
    
    float total = (fare - 32) / 1.8;
    
    
	printf ("A conversao de graus para fahrenheit é: %f\n \n ",total);
	 
	return 0;
	
	
}

