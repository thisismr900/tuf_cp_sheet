//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        int ans=a[n-1];

        for(int i=n-2; i>=0; i--){
            int x=a[i+1];
            a[i] = min(x-1, a[i]);
            if(a[i]<0)
                break;
            ans+=a[i];
        }
        cout<<ans;
    }
    return 0;
}