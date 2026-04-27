#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int telefone[12];
	int verif = 0;
	printf("INSIRA O TELEFONE: ");
	for (int i=0; i<11; i++){
		scanf("%d", &telefone[i]);
	}
	getchar();
	for (int i=0; i<11; i++){
		verif += telefone[i];
	}
	if (verif > 0){
		printf ("PARABENS! O NUMERO ");
		for (int i=0; i<11; i++){
		printf("%d", telefone[i]);
	}
		printf (" FOI ADICIONADO COM SUCESSO!");
	}
}
