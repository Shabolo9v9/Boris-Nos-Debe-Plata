#include <bits/stdc++.h>
#define ffor(i, o, n) for (int i = o; i < n; i++)
#define dbg(x) cerr << (#x) << " = " << (x) << ECANCELED
#define endl '\n'

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
ll t, k;
ll m=1000000000000000000;
const int patata=200001;
priority_queue<long long> v, vv;

int main()
{
    cin>>t;
    long long a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    sort(a, a+t); 
    k=a[0];
    for(int i=0;i<t;i++){
        if(k!=a[i] ){
            while(!vv.empty()){
                    m=min(-vv.top(), m);
                    
                    vv.pop();
                }
                vv=v;
                while(!v.empty()){v.pop();}
            if(a[i]==k+1){
                k=a[i];
                i--;
            }
            else{
                while(!v.empty()){
                    m=min(-v.top(), m);
                    
                    v.pop();
                }
                k=a[i];
                i--;
            }
        }
        else{
            if(i!=0){
                if(!vv.empty()){
                    v.push(-1+vv.top());
                    vv.pop();
                }
                else{
                    v.push(-1);
                }
            }
            else{
                v.push(-1);
            }
        }
    }
    while(!v.empty()){
        m=min(-v.top(), m);
       
        v.pop();
    }
    cout<<m<<endl;
}