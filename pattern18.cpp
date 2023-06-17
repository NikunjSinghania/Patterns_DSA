#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define p 31
int main()
{
    int n;
    cin >> n;

    char k = 'A';
        for(int i=1;i<=n;i++) {
            k = 'A';
            for(int j=1;j<=n-i;j++) {
                cout << " ";
            }
            for(int j=1;j<=(((i*2)-1)/2)+1;j++) {
                cout << k;
                k++;
            }
            k-=2;
            for(int j=1;j<=((i*2)-1)-((((i*2)-1)/2)+1);j++) {
                cout << k;
                k--;
            }
            cout << endl;
        }

    return 0;
}