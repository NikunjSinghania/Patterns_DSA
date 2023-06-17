#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i+1;j++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}