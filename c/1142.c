#include<stdio.h>

int main(){
	int i,v,k=0,a,b,c;
	scanf("%d",&v);
	for(i=0 ; i<v ; i++){
        k++;
		a = k;
		b = k+1;
		c = b+1;
		k = b+1;
		printf("%d %d %d PUM\n",a,b,c);
		k++;

	}



	return 0;
}