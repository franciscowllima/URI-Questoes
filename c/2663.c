#include <stdio.h>
 
void selecionarMelhores(int* array,int maior_numero,int minimo,int tamanho){
    int array_contagem[maior_numero+1], i, cont = 0;
    for(i=0;i<=maior_numero;i++){
        array_contagem[i] = 0;
    }
    for(i =0;i<tamanho;i++){
        array_contagem[array[i]]++;
    }
    for(i=maior_numero;i>0;i--){
        if(cont < minimo){
            cont = cont + array_contagem[i];
        }

    }
    printf("%d\n",cont);
}

int main(){
    int tamanho_entrada;
    int numero_minimo;
    int i,maior_numero=0;
    scanf("%d",&tamanho_entrada);
    int array_entradas[tamanho_entrada];
    scanf("%d",&numero_minimo);
    for(i = 0;i<tamanho_entrada;i++){
        scanf("%d",&array_entradas[i]);
        if(array_entradas[i]>maior_numero){
            maior_numero = array_entradas[i];
        }
    }
    selecionarMelhores(array_entradas,maior_numero,numero_minimo,tamanho_entrada);
}