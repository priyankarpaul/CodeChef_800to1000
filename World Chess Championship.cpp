
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

    ll x;
    cin >> x;
    string s;
    cin >> s;
    ll c = 0;
    ll n = 0;
    for (int i = 0; i < 14; i++) {
        if (s[i] == 'C') {
            c++;
        }
        else if (s[i] == 'N') {
            n++;
        }
        else if (s[i] == 'D') {
            c++;
            n++;
        }
    }
    if (n > c) {
        cout << 40 * x << "\n";
    }
    else if (c > n) {
        cout << 60 * x << "\n";
    }
    else cout << 55 * x << "\n";
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