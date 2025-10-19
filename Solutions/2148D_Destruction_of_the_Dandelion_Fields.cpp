#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--){
        int n;      cin >> n;
        
        vector<ll> odd;
        vector<ll> v(n);
        for(auto &it : v)   {
            cin >> it;
            if(it % 2)
                odd.push_back(it);
        }
        
        if(odd.empty())
            cout << 0 << endl;
        else {
            sort(odd.rbegin(), odd.rend());
            ll ans = *odd.begin();
            for(auto it : v) {
                if(it % 2 == 0)
                    ans += it;
            }
            odd.erase(odd.begin());
            int sz = odd.size();
            for(int i = 0; i < sz/2; i++) {
                ans += odd[i];
            }
            
            cout << ans << endl;
        }
        
        
    }
    return 0;
}
/*
5
3
2 4 6
4
4 2 1 6
4
1000000000 999999999 1000000000 999999999
6
5 7 3 2 4 6
7
9 5 7 3 4 6 2

0
13
2999999999
24
28
*/