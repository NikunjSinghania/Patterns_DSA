#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    char k = 'A' + n-1;
        for(int i=1;i<=n;i++) {
            k = 'A' + n-1;
            for(int j=1;j<=i;j++) {
                cout << k << " ";
                k--;
            }
            cout << endl;
        }
    return 0;
}