//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int ans=0;
        int n;
        cin>>n;

        for(int i=1; i<=n-1; i++){
            ans+=i*(n-i);
        }
        ans+=n;
        cout<<ans<<endl;
    }
    return 0;
}