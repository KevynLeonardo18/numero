#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x;

	printf("\nDeteccion de numeros (positivos, negativos).\n\n");
	printf("Ingresar el numero: ");
	scanf("%i%*c", &x);
	
	if(x>=0){
		printf("Su numero es positivo.\n");
	}else{
		printf("Su numero es negativo.\n");
	}

	system("pause");
	return 0;
}
