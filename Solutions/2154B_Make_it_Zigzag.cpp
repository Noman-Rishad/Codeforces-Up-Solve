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
        int n;  cin >> n;
        vector<ll> v(n);
        for(auto &it : v)   cin >> it;

        if(n == 2) {
            if(v[0] < v[1])
                cout << 0 << endl;
            else
                cout << 1 << endl;
            continue;
        }

        ll mx = 0;
        for(int i = 0; i < n-1; i++) {
            mx = max(v[i], mx);
            if(i % 2) {
                  v[i] = mx;
            }
        }

        ll ans = 0;
        if(v[0] >= v[1])
            ans += (v[0] - v[1]) + 1;
        //if(v[n-1] >= v[n-2])
            //ans += (v[n-1] - v[n-2]) + 1;
        for(int i = 2; i < n; i++) {
            if(i % 2 == 0) {
                if(v[i] >= v[i-1])
                    ans += (v[i] - v[i-1]) + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
/*
9
5
1 4 2 5 3
4
3 3 2 1
5
6 6 6 6 6
7
1 2 3 4 5 6 7
3
3 2 1
2
1 2
2
5 2
9
65 85 19 53 21 79 92 29 96
9
53 65 51 18 67 25 76 75 88

0
1
3
6
1
0
1
13
26
*/