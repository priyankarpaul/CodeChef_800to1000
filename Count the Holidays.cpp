
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
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 6 || x == 7 || x == 13 || x == 14 || x == 20 || x == 21 || x == 27 || x == 28) {
            count++;
        }
    }
    cout << 8 + (n - count) << "\n";
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