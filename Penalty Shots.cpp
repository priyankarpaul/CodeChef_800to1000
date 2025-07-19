
#include <bits/stdc++.h>

using namespace std;

#define ll            long long int
#define ff              first
#define ss              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define double         long double

const ll MOD = 1e9 + 7;

void solve() {
    ll count1 = 0;
    ll count2 = 0;
    for (int i = 1; i <= 10; i++) {
        int x;
        cin >> x;
        if (i % 2 != 0 && x == 1) {
            count1++;
        }
        else if (i % 2 == 0 && x == 1) {
            count2++;
        }
    }
    if (count1 > count2) cout << 1 << "\n";
    else if (count1 < count2) cout << "2\n";
    else cout << "0\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif



    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}