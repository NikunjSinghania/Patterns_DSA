#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    
    int n;
    cin >> n;

    bool ch = true;
        for(int i=1;i<=n;i++) {
            ch = i%2==0 ? false : true;
            for(int j=1;j<=i;j++) {
                cout << ch << " ";
                ch = ch ? false : true;
            }
            cout << endl;
    }

    return 0;
}