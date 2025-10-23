#include<iostream>
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
        int n, k;      
        cin >> n >> k;
        
        if(k == n*n - 1) {
            cout << "NO" << endl;
            continue;
        }
        
        char grid[n+1][n+1];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(k > 0) {
                    grid[i][j] = 'U';
                    k--;
                }
                else {
                    if(j == n && grid[i][j-1] == 'U')
                        grid[i][j] = 'D';
                    else if(j == n && grid[i][j-1] == 'R')
                        grid[i][j] = 'L';
                    else
                        grid[i][j] = 'R';
                }
            }
        }
        
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
/*
4
2 4
3 5
2 3
4 7

YES
UU
UU
YES
UUU
UUD
RRL
NO
YES
UUUU
UUUD
RRRL
RRRL
*/