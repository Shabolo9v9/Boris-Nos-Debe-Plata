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
    bool ans=true;
    string pe;
    long long n, m, s;
    cin>>n>>m;
    long long f[n], c[m];
    memset(f, 0, sizeof(f));
    memset(c, 0, sizeof(f));
    char a[n][m], b[n][m];
    for(long long i=0; i<n; i++){
        cin>>pe;
        for(long long j=0; j<m; j++){
            a[i][j]=pe[j];
        }
    }
    for(long long i=0; i<n; i++){
        cin>>pe;
        for(long long j=0; j<m; j++){
            b[i][j]=pe[j];
        }
    }
    for(long long i=0; i<(n/2+(n%2)); i++){
        for(long long j=0; j<(m/2+(m%2)); j++){
            if(a[i][j]==b[i][j]&&a[n-i-1][m-j-1]==b[n-i-1][m-j-1]&&a[n-i-1][j]==b[n-i-1][j]&&a[i][m-j-1]==b[i][m-j-1]){}
            else if(a[i][j]==b[n-i-1][j]&&a[n-i-1][m-j-1]==b[i][m-j-1]&&a[n-i-1][j]==b[i][j]&&a[i][m-j-1]==b[n-i-1][m-j-1]){
                f[i]+=1;
                cout<<"11"<<endl;
            }
            else if(a[i][j]==b[i][m-j-1]&&a[n-i-1][m-j-1]==b[n-i-1][j]&&a[n-i-1][j]==b[n-i-1][m-j-1]&&a[i][m-j-1]==b[i][j]){
                c[j]+=1;
                cout<<"21"<<endl;
            }
            else if(a[i][j]==b[n-i-1][m-j-1]&&a[n-i-1][m-j-1]==b[i][j]&&a[n-i-1][j]==b[i][m-j-1]&&a[i][m-j-1]==b[n-i-1][j]){
                f[i]+=1;
                c[j]+=1;
                cout<<"31"<<endl;
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(ans){
        s=0;
        for(long long i=0; i<n; i++){
            if(f[i]%2==1){s++;}
        }
        for(long long i=0; i<m; i++){
            if(c[i]%2==1){s++;}
        }
        cout<<s<<endl;
        for(long long i=0; i<n; i++){
            if(f[i]%2==1){cout<<"F "<<i<<endl;}
        }
        for(long long i=0; i<m; i++){
            if(c[i]%2==1){cout<<"C "<<i<<endl;}
        }
    }
    else{
        cout<<-1<<endl;
    }
}