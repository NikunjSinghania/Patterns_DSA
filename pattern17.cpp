#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    char k='A';
        for(int i=1;i<=n;i++) {
            for(int j=0;j<i;j++){
                cout << k ;
            }
            k++;
            cout << endl;
        }

    return 0;
}