
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

    float x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;

    float chef_distance = (x3 - x1) / v1;
    float kefa_distance = (x2 - x3) / v2;

    //cout << chef_distance   << " " << kefa_distance   << "\n";

    if (chef_distance > kefa_distance) {
        cout << "Kefa\n";
    }
    else if (chef_distance < kefa_distance) {
        cout << "Chef\n";
    }
    else if (chef_distance == kefa_distance)cout << "Draw\n";




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