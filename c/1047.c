#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
int main() {
 
 int x,y,xx,yy,aux,aux2;


scanf("%d %d %d %d",&x,&xx,&y,&yy);
	
     if(x > y && yy > xx ){
    aux = (24-x)+y;	
    aux2 = yy - xx;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",aux,aux2);	
    	
    	
	}
	else if(y > x && yy > xx){
	aux = y - x;
	aux2 = yy - xx;	
	 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",aux,aux2);
		
	}
	else if(x > y && xx > yy){
		aux = ((24-x)+y)-1;	
		
		aux2 = (60- xx)+ yy;
		 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",aux,aux2);
	}
	
	else if(y > x && xx > yy){
		aux = (y - x)-1;
		
		aux2 = (60 - xx)+ yy;
		 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",aux,aux2);
	}
	
	
	else if(x == y && xx == yy){
		aux = 24;
		aux2 = 0;
	 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",aux,aux2);
		
	}
	
    return 0;
}