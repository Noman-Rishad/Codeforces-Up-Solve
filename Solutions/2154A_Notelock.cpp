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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0, idx = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                ans = 1;
                idx = i;
                break;
            }
        }

        for(int i = idx+1; i < n; i++) {
            if(s[i] == '1') {
                bool zero = 1;
                for(int j = i - (k-1); j < i; j++) {
                    if(s[j] == '1') {
                        zero = 0;
                        break;
                    }
                }
                if(zero)
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
