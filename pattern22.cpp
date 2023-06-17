#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
            cout << "*";
        }
        cout<<endl;
        
        for(int i=1;i<=n-2;i++){
            cout << "*";
            for(int j=1;j<=n-2;j++){
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }

        for(int i=1;i<=n;i++){
            cout << "*";
        }
        cout<<endl;
    return 0;
}