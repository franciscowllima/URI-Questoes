#include <stdio.h>

#define DEBUG 0
 
int main() {
 
    int n, prob[300], prob_ok[300], tempo, c, result, i;
    int corretos, tempo_total;
    char p;
    while(scanf("%d", &n) != EOF && n != 0) {
        for (i = 0; i < 300; i++) {
            prob[i] = 0;
            prob_ok[i] = 0;
        }
        
        for (i = 0; i < n; i++) {
            p = tempo = 0;
            scanf("\n%c %d", &p, &tempo);
            // if (DEBUG) printf("%d %d\n", p, tempo);
            result = 0;
            while ((c = getchar()) != '\n') {
                if (result != 0) {
                    continue;
                }
                
                if (c == 'i') {
                    result = 1;
                } else if (c == 'c') {
                    result = 2;
                }
            }
            
            if (result == 1 && prob_ok[p] == 0) {
                prob[p] += 20;
                if (DEBUG) printf("errado. somou 20\n");
            } else if (result == 2 && prob_ok[p] == 0) {
                prob[p] += tempo;
                prob_ok[p] = 1;
                if (DEBUG) printf("correto. somou %d\n", tempo);
            }
        }
        
        corretos = tempo_total = 0;
        for (i = 0; i < 300; i++) {
            if (prob_ok[i] == 1) {
                corretos += 1;
                tempo_total += prob[i];
            }
        }
        
        printf("%d %d\n", corretos, tempo_total);
    }
 
    return 0;
}
