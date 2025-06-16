#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[10005];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    int total = 0;
    for (int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        while (i < j) {
            if (a[i] + a[j] > a[k]) {
                total += j - i;
                j--;
            } else {
                i++;
            }
        }
    }

    cout << total << endl;

    return 0;
}



