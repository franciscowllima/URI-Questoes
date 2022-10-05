#include <stdio.h>
 
int main() {
 
  int x,y,aux;


scanf("%d %d",&x,&y);
	
     if(x > y){
    aux = (24-x)+y;	
    printf("O JOGO DUROU %d HORA(S)\n",aux);	
    	
    	
	}else if(y > x){
	aux = y - x;	
		printf("O JOGO DUROU %d HORA(S)\n",aux);
		
	}else if(x == y){
		aux = 24;
		printf("O JOGO DUROU %d HORA(S)\n",aux);
		
	}
	
	
 
    return 0;
}