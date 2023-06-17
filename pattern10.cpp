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
            
            for(int j=1;j<=n-i;j++) {
                cout << " ";
            }
            
            for(int j=1;j<=i;j++) {
                cout << "* ";
            }
            cout << endl;
        }
        
        for(int i=n;i>0;i--) {
            
            for(int j=1;j<=n-i;j++) {
                cout << " ";
            }
            
            for(int j=1;j<=i;j++) {
                cout << "* ";
            }
            cout << endl;
        }

    return 0;
}