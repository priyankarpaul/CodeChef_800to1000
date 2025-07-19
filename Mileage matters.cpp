
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

    ll n, a, b;
    float x, y;
    cin >> n >> x >> y >> a >> b;

    float travel_petrol = n * (x / a);
    float travel_diesel = n * (y / b);

    if (travel_diesel > travel_petrol) cout << "PETROL\n";
    else if (travel_petrol > travel_diesel) cout << "DIESEL\n";
    else if (travel_diesel == travel_petrol)cout << "ANY\n";

    

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