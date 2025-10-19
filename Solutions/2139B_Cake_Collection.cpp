#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) {
           cin >> v[i];
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        if(n >= m) {
            ll j = 1;
            for(ll i = n-m; i < n; i++) {
                ans += (j * v[i]);
                j++;
            }
            cout << ans << endl;
        }
        else {
            ll j = m - n + 1;
            ans += j * v[0];
            j++;
            for(ll i = 1; i < n; i++) {
                ans += (j * v[i]);
                j++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
/*
4
3 4
1 2 3
3 2
1 2 3
1 1000
100000
2 1000
1 100000

20
8
100000000
100000999
*/
