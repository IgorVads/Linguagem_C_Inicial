#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um número:");
	scanf("%f", &n);
	printf("O cubo de %.1f é %.1f", n, pow(n,3));
	return(0);
}
