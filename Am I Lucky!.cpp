
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

    ll n, x, k;
    cin >> n >> x >> k;

    ll noOfGirls = n - x;

    ll treking_group_boys = x / k;
    ll treking_group_girls = noOfGirls / k;

    ll remaining_girls = noOfGirls - (treking_group_girls * k);
    ll remaining_boys = x - (treking_group_boys * k);

    cout << abs(remaining_boys - remaining_girls) << "\n";

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