#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Digite o primeiro n�mero:");
	scanf("%i", &n1);
	printf("Digite o segundo n�mero:");
	scanf("%i", &n2);
	
	printf("O dobro de %i � %i\nO triplo de %i � %i", n1, n1*2, n2, n2*3);
	return(0);
}
