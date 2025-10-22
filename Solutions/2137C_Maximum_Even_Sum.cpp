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
        ll a, b;
        cin >> a >> b;

        if(a % 2 == 0 && b % 2)
            cout << -1 << endl;
        else if(a % 2 && b % 2) {
            ll k = b;
            ll ans = a*k + b/k;
            cout << ans << endl;
        }
        else {
           ll k = b / 2;
           ll ans = a*k + b/k;
           if(ans % 2)
            cout << -1 << endl;
           else
            cout << ans << endl;
        }
    }
    return 0;
}
