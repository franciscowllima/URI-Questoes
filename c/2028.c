#include <stdio.h>
#include <stdlib.h>

int vet[200];

void inicializa(){
	int i;
	for (i = 0; i < 200; i++);
	{
		vet[i] = 0;
	}
}
int val(int a){

	int i, g, inc = 0;
	for (i = 0; i <= a; i++){

		if (i == 0)
		{
			inc++;
		}
		for (g = 0; g < i; g++){
			inc++;
		}
	}	

	return inc;
}
int main(){
	
	int a,i,g, incre = 1;
	inicializa();

	while( scanf("%d", &a) != EOF ){

		//system("cls");
		if (vet[a] > 0){
			if (vet[a] == 1)
			{
				printf("Caso %d: %d numero\n",incre, vet[a]);
			}else{
				printf("Caso %d: %d numeros\n",incre, vet[a]);
			}
			
		}else if(vet[a] == 0){
			
			vet[a] = val(a);

			if (vet[a] == 1)
			{
				printf("Caso %d: %d numero\n",incre, vet[a]);
			}else{
				printf("Caso %d: %d numeros\n",incre, vet[a]);
			}
		}
		
		for (i = 0; i <= a; i++){
			
			if (i == 0){
				printf("%d", i);
			}
			for (g = 0; g < i; g++){

				printf(" %d", i);
			}
		}

		incre++;
		printf("\n\n");
	}

	return 0;
}
