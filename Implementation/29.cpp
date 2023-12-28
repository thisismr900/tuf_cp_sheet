#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll>a(2*n);
        for(int i=0; i<2*n; i++)
            cin>>a[i];
        
        sort(begin(a), end(a));
        
        cout<<a[n]-a[n-1]<<endl;
    }
    return 0;
}