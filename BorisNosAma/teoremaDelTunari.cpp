#include <bits/stdc++.h>
#define ffor(i, o, n) for (int i = o; i < n; i++)
#define dbg(x) cerr << (#x) << " = " << (x) << ECANCELED
#define endl '\n'

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const int T = 200000 + 7;
bool esPrimo[T] = {true};
vll primos;
ll t, k;



int main()
{
    long long x, y, xx, xxx, yy, yyy, a, b, c;
    while(cin>>x>>y>>xx>>yy>>xxx>>yyy){
        a=(x-xx)*(x-xx)+(y-yy)*(y-yy);
        b=(xx-xxx)*(xx-xxx)+(yy-yyy)*(yy-yyy);
        c=(x-xxx)*(x-xxx)+(y-yyy)*(y-yyy);
        if(a>b&&a>c&&a==b+c){cout<<"Si"<<endl;}
        else if(b>a&&b>c&&b==a+c){cout<<"Si"<<endl;}
        else if(c>b&&c>a&&c==b+a){cout<<"Si"<<endl;}
        else {cout<<"No"<<endl;}
    }
}