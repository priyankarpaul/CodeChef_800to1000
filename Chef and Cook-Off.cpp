
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
    ll sum = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum == 0) cout << "Beginner\n";
    else if (sum == 1) cout << "Junior Developer\n";
    else if (sum == 2) cout << "Middle Developer\n";
    else if (sum == 3) cout << "Senior Developer\n";
    else if (sum == 4) cout << "Hacker\n";
    else if (sum == 5)cout << "Jeff Dean\n";
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