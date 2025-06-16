#include <bits/stdc++.h>
#define ffor(i, o, n) for(int i = o; i < n; i ++)
#define dbg(x) cerr << (#x) << " = " << (x) << ECANCELED
#define endl '\n'

using namespace std;
typedef long long ll;
using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;
    if(a==2){
if(b%4==0){cout<<6<<endl;}
if(b%4==1){cout<<2<<endl;}
if(b%4==2){cout<<4<<endl;}
if(b%4==3){cout<<8<<endl;}
    }
    else if(a==3){
if(b%4==0){cout<<1<<endl;}
if(b%4==1){cout<<3<<endl;}
if(b%4==2){cout<<9<<endl;}
if(b%4==3){cout<<7<<endl;}
    }
    else if(a==4){
if(b%2==0){cout<<6<<endl;}
if(b%2==1){cout<<4<<endl;}
    }
    else if(a==5){
cout<<5<<endl;
    }
    else if(a==6){
cout<<6<<endl;
    }
    else if(a==7){
if(b%4==0){cout<<1<<endl;}
if(b%4==1){cout<<7<<endl;}
if(b%4==2){cout<<9<<endl;}
if(b%4==3){cout<<3<<endl;}
    }
    else if(a==8){
if(b%4==0){cout<<6<<endl;}
if(b%4==1){cout<<8<<endl;}
if(b%4==2){cout<<4<<endl;}
if(b%4==3){cout<<2<<endl;}
    }
    else if(a==9){
if(b%2==0){cout<<1<<endl;}
if(b%2==1){cout<<9<<endl;}
    }
}