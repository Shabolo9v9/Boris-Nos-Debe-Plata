#include <bits/stdc++.h>
#define ffor(i, o, n) for (int i = o; i < n; i++)
#define dbg(x) cerr << (#x) << " = " << (x) << endl
#define endl '\n'

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const int T = 2000000 + 7;
bool esPrimo[T];
vll primos;
ll t, k;

void criba()
{
    esPrimo[0] = false;
    esPrimo[1] = false;
    for (ll a = 2; a < T; a++)
    {
        if (esPrimo[a])
        {
            for (ll d = a * a; d < T; d += a)
            {
                //dbg(d);
                esPrimo[d] = false;
            }
            primos.push_back(a);
            //dbg(a);
        }
    }

    for(int i = 1; i < primos.size() - 4; i += 5){
        //dbg(primos[i]);
        swap(primos[i], primos[i + 2]);
        swap(primos[i + 2], primos[i + 3]);
    }

}

int main()
{
    memset(esPrimo, 1, sizeof(esPrimo));
    criba();
    cin >> t;
    while(t --){
        cin >> k;
        cout << primos[k - 1] << endl;
    }
}