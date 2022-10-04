#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const double eps = 1e-8;
const int oo = 0x3f3f3f3f;

#define fr(a,b,c) for(int a = b; a < c; a++)
#define rep(a,b) fr(a,0,b)
#define ln putchar('\n')
#define se second
#define fi first
#define db if(1)
#define dbs(x) db rep(i,x) putchar(' '); db
#define pb push_back
#define mem(r,v) memset(r, v, sizeof(r))
#define mod(v) ((v)%1000000007ll)

typedef pair<int, int> ii;
typedef pair<ii, ii> pii;

int n, m, I, F, O, qs, dp[1050][86409], pa, prox[1009];
vector<pii> shows;

bool read(){
	if(scanf("%d", &n) == EOF) return false;
	rep(i, n) {
	    scanf("%d", &m);
	    rep(j, m) {
	        scanf("%d%d%d", &I, &F, &O);
	        shows.push_back(pii(ii(I, F),ii(O,i)));
	    }
	}
	sort(shows.begin(), shows.end());
	qs = (int)shows.size();
	int j;
	mem(prox, -1);
	rep(i, qs) {
	    j = i;
	    while(shows[j].fi.fi < shows[i].fi.se && j < qs) j++;
	    prox[i] = j;
	}
	pa = (1 << n) - 1;
	mem(dp, -1);
	return true;
}

int rec(int id, int p) {
    if (id == qs || id == -1) {
        if (p == pa) return 0;
        else return -oo;
    }
    if (dp[p][id] != -1) return dp[p][id];
    return dp[p][id] = max(rec(id+1, p), rec(prox[id], p|(1<<shows[id].se.se)) + shows[id].se.fi);
}

void process(){
    int r = rec(0, 0);
    if (r < 0) r = -1;
    printf("%d\n", r);
}

int main(){
	int t = 1;
	//scanf("%d", &t);

	while(t-- && read()){
		process();
	}

	return 0;
}
