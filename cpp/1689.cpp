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
#define MAX 1111111

int n, k;
int p[MAX];
int l[MAX];
int prox[MAX];
int dp[MAX];

bool read(){
    if(scanf("%d%d", &n, &k) == EOF) return false;

    rep(i,n) scanf("%d", &p[i]); //M[i] = p[i]; }
    rep(i,n) scanf("%d", &l[i]);

    mem(dp,-1);

    return true;
}

int rec (int pos) {
    if (pos >= n) return 0;
    if (dp[pos] != -1) return dp[pos];
    // return dp[pos] = max(rec(pos + 1), l[pos] + rec(*M.upper_bound(pos + k)));
    return dp[pos] = max(rec(pos + 1), l[pos] + rec(prox[pos]));
}

void process(){
    // preprocessamento
    int i = 0, j = 1;
    while (i < n - 1 && j < n) {
        if (p[j] - p[i] >= k) prox[i++] = j;
        else j++;
        if (i == j) j++;
    }
    while (i < n) prox[i++] = n;
    // fim preprocessamento
    //db rep(i, n) cout << prox[i] << " "; ln;
    //db rep(i, n) cout << *M.upper_bound(i) << " "; ln;
    printf("%d\n", rec(0));
}

int main(){
    int t = -1;
    scanf("%d", &t);

    while(t-- && read()){
        process();
    }

    return 0;
}
