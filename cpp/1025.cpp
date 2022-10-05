#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buscaBinaria(vector<int> &v, int x){

    int ini,meio,fim;
    ini = 0;
    fim = v.size()-1;

    while(ini <= fim){
        meio = (ini+fim)/2;
        if(v[meio] == x)
            break;
        else if (v[meio]>x)
            fim = meio - 1;
        else
            ini = meio + 1;
    }

    if(v[meio] == x){
        int p = meio;
        while(p-1 >= 0 and v[p-1] == x)
            p--;
        return p;
    }
    return -1;
}

int main(){

    int Number,Query,x,t=1;

    while( (cin >> Number >> Query) and Number+Query > 0 ){

        cout << "CASE# " << t++ << ":" << endl;

        vector<int> v;
        while(Number--){
            cin >> x;
            if( x)
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        while(Query--){
            cin >> x;
            int pos = buscaBinaria(v,x);

            if(pos >= 0)
                cout << x << " found at " << pos+1 << endl;
            else
                cout << x << " not found" << endl;
        }
    }

    return 0;
}