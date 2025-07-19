
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
    ll n, cnt = 0;
    cin >> n;
    if (n > 100) {
        cnt = cnt + n / 100;
        n = n % 100;
    }
    if (n < 100 && n >= 50) {
        cnt = cnt + (n / 50);
        n = n % 50;
    }
    if (n < 50 && n >= 10) {
        cnt = cnt + (n / 10);
        n = n % 10;
    }
    if (n < 10 && n >= 5) {
        cnt = cnt + (n / 5);
        n = n % 5;
    }
    if (n < 5 && n >= 2) {
        cnt = cnt + (n / 2);
        n = n % 2;
    }
    if (n == 1) {
        cnt = cnt + n;

    }
    cout << cnt << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}