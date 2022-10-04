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

int n, m, k, a, b, t, ai, bi, max_t;
int dp[22][22][2010], v[22][22][2010];

bool read() {
    if (scanf("%d%d%d", &n, &m, &k) == EOF || n == 0) return false;
    mem(dp, -1); mem(v, 0);
    max_t = 0;
    rep(i, k) { scanf("%d%d%d", &a, &b, &t); v[a - 1][b - 1][t] = 1; max_t = max(max_t, t); }
    scanf("%d%d", &ai, &bi); ai--; bi--;
    return true;
}

int rec (int y, int x, int tem) {
    if (tem > max_t || x < 0 || y < 0 || y >= n || x >= m) return 0;
    dbs(tem) { printf("lin %d col %d tem %d   ", y, x, tem); printf("macas: %d\n", v[y][x][tem]); };
    if (dp[y][x][tem] != -1) return dp[y][x][tem];
    int res = 0;
    res = max(res, rec(y, x + 1, tem + 1));
    res = max(res, rec(y + 1, x, tem + 1));
    res = max(res, rec(y + 1, x + 1, tem + 1));
    res = max(res, rec(y, x - 1, tem + 1));
    res = max(res, rec(y - 1, x, tem + 1));
    res = max(res, rec(y - 1, x - 1, tem + 1));
    res = max(res, rec(y - 1, x + 1, tem + 1));
    res = max(res, rec(y + 1, x - 1, tem + 1));
    res = max(res, rec(y, x, tem + 1));
    return dp[y][x][tem] = res + v[y][x][tem];
}

void process(){
    printf("%d\n", rec(ai, bi, 0));
}

int main(){
    int t = -1;
    //scanf("%d", &t);

    while(t-- && read()){
        process();
    }

    return 0;
}
