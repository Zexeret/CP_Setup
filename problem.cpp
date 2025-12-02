#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
 
const ll MOD = 1e9 + 7;
 
int solve()
{
    ll n ; cin >> n  ;
    vector<ll> arr(n) ;
    map<ll,ll> count ;
    ll ans = 0 ;
    for(int i = 0 ; i<n; i++) {
        cin >> arr[i] ;
 
        count[arr[i]]++ ;
        if (count[arr[i]] == 1) ans++ ;
    }
 
    cout << ans  ;
 
 
    return 0;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(10);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    //#########***************************FROM BELOW*******************************####################
 
    ll t = 1;
    //cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}