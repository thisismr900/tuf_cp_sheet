#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n,x;
        cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else{
            n-=2;
            cout<<1+ceil(1.0*n/x)<<endl;
        }
    }
    return 0;
}