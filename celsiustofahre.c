#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	// DECLARA��O DE VARI�VEIS
	double TC, TF;
	
	printf("Enter the tempeture in Celsius: ");
	scanf("%lf", &TC);
	TF = TC * 1.8 + 32;
	printf("The tempeture in Fahrenheit is %.2lf\n\n",TF);
	
	
	
	system("pause");
}
