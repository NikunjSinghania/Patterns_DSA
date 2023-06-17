#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    int k = n;
        for(int i=0;i<n;i++) {
            k=n;
            for(int j=0;j<i;j++){
                cout << k-j << " ";
            }
            for(int j=1;j<=((2*n)-1)-(2*i);j++){
                cout << k-i << " ";
            }
            for(int j=i-1;j>-1;j--){
                cout << k-j << " ";
            }
            cout << endl;
        }
        
        for(int i=n-2;i>-1;i--) {
            k=n;
            for(int j=0;j<i;j++){
                cout << k-j << " ";
            }
            for(int j=1;j<=((2*n)-1)-(2*i);j++){
                cout << k-i << " ";
            }
            for(int j=i-1;j>-1;j--){
                cout << k-j << " ";
            }
            cout << endl;
        }
    return 0;
}