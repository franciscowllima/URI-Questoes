#include <stdio.h>
#define MAXl 50

int main (){
int a[MAXl],i,j,x,cont,l,n;
scanf("%d",&n);

while(n){
scanf("%d",&l);
	for(i=1;i<=l;i++)
	   scanf("%d",&a[i]);	
		cont = 0;
for(j=2;j<=l;j++){
x = a[j];
i = j-1;
	while(i > 0 && a[i] > x){
	  a[i+1] = a[i];
	  i = i-1;
	  cont = cont+1;
	}
   a[i+1] = x;
}

printf("Optimal train swapping takes %d swaps.\n",cont);
n--;.
}
}