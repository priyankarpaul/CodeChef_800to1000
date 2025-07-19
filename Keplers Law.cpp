
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

    ll t1, t2, a1, a2;
    cin >> t1 >> t2 >> a1 >> a2;

    float f_square = (t1 * t1);
    float  s_square = (t2 * t2);
    float  f_cube = (a1 * a1 * a1);
    float s_cube = (a2 * a2 * a2);

    float first_proportion = (f_square / f_cube);
    float second_proportion = (s_square / s_cube);

    if (first_proportion == second_proportion) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
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