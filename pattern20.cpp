#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            for(int j=0;j<2*i;j++) {
                cout << " ";
            }
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            cout << endl;
        }
        
        for(int i=n-1;i>=0;i--) {
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            for(int j=0;j<2*i;j++) {
                cout << " ";
            }
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            cout << endl;
        }

    return 0;
}