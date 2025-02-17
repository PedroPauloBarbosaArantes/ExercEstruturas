#include <stdio.h>

void inserction_sort( int A[]){
	int j;
	
	for(j=1; j<20; j++){
		int chave = A[j];
		int i = j - 1;
		while(i >= 0 && A[i] > chave ){
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = chave;
	}
}
int main(){
	int A[1000];
	int i;
	srand(time(NULL));
	for(i=0; i<1000; i++){
		A[i] = (rand() % 50) + 1;
	}
	inserction_sort(A);
	for(i=0; i<1000; i++){
		printf("%d ", A[i]);
	}
	return 0;
}
