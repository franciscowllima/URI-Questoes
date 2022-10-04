#include <bits/stdc++.h>

const double eps = 1e-8;
const int oo = 0x3f3f3f3f;

typedef long long ll;
using namespace std;

#define fr(a,b,c) for(int a = b; a < c; a++)
#define rep(a,b) fr(a,0,b)
#define ln printf("\n")
#define db if(0)
#define dbs(x) db rep(i,x) printf(" "); db
#define pb push_back
#define mem(r,v) memset(r, v, sizeof r)

int n, m;
int v[100100], f[100100];
int dp[100100];

int rec (int A[], int x, int maxc) {
    if (x >= maxc) return 0;
    if (dp[x] != -1) return dp[x];
    return dp[x] = max(A[x] + rec(A, x + 2, maxc), rec(A, x + 1, maxc));
}

bool read(){
    if(scanf("%d%d", &m, &n) == EOF) return false;

    if (n == 0) return false;
    rep(i,m)  { rep(j,n) scanf("%d", &v[j]); mem(dp, -1); f[i] = rec(v,0,n); }

    return true;
}

void process(){
    mem(dp, -1);
    printf("%d\n", rec(f,0,m));
}

int main(){
    int t = -1;
    //scanf("%d", &t);

    while(t-- && read()){
        process();
    }

    return 0;
}
