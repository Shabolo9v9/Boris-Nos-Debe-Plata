#include <bits/stdc++.h>
#define ffor(i, o, n) for (int i = o; i < n; i++)
#define dbg(x) cerr << (#x) << " = " << (x) << ECANCELED
#define endl '\n'

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const int T = 2000000 + 7;
bool esPrimo[T] = {false};
vll primos;
ll t, k;


int main()
{
    long long a, b, aa, bb, aaa, bbb;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        aa=a/7;
        bb=b/7;
        aaa=a/49;
        bbb=b/49;
        if(a%7==0){aa--;}
        if(a%49==0){aaa--;}
        cout<<bb-aa-(bbb-aaa)<<endl;
    }
}