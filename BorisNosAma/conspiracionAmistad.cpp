#include <bits/stdc++.h>
#define ffor(i, o, n) for (int i = o; i < n; i++)
#define dbg(x) cerr << (#x) << " = " << (x) << endl
#define endl '\n'
#define pb push_back

using namespace std;
typedef long long ll;

const int T = 1003;
int n, m, u, v, ans = -1;
unordered_set < int > vis;
vector < int > g[T];
queue < int > q;

void bfs(int nd){
    vis.insert(nd);
    q.push(nd);

    while(!q.empty()){
        nd = q.front();
        q.pop();

        ffor(i, 0, g[nd].size()){
            if(vis.find(g[nd][i]) == vis.end()){
                vis.insert(g[nd][i]);
                q.push(g[nd][i]);
            }
        }
    }

}

int main()
{
    cin >> n >> m;
    ffor(i, 0, m){
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
        if (ans == -1)
        {
            bfs(u);
            if (vis.size() == n)
                ans = i + 1;

            vis.clear();
        }
    }
    if(ans != -1)
    {
        cout << ans << endl;
    }
    else{
        cout << ":(" << endl;
    }

}