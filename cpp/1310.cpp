#include<bits/stdc++.h>

#define MAXN 52

using namespace std;

int N, R[MAXN], CPD;

int kadane() {
    int max_atual, max_total;
    max_atual = max_total = 0;
    for (int i = 0; i < N; i++) {
        max_atual = max(max_atual + R[i] - CPD, 0);
        max_total = max(max_atual, max_total);
    }
    return max_total;
}

int main() {
    while (scanf("%d", &N) != EOF) {
        scanf("%d", &CPD);
        for (int i = 0; i < N; i++)
            scanf("%d", &R[i]);
        printf("%d\n", kadane());
    }

    return 0;
}
