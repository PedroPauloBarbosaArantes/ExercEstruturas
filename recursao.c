#include <stdio.h>
#include <locale.h>

int soma(int n){
	if(n == 1) return 1;
	else return n + (n-1);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("A soma � %d ", soma(10));	
	return 0;
}
