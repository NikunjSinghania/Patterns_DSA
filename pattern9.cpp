#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;
    
    int k=1;
        for(int i=n;i>0;i--) {
            
            for(int j=1;j<=n-i;j++) {
                cout << " ";
            }
            
            for(int j=1;j<=(2*n)-k;j++) {
                cout << "*";
            }
            k+=2;
            cout << endl;
        }
    
    return 0;
}