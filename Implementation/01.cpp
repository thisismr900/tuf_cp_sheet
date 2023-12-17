#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=0;
    
    
    while(t--){
        string statement;
        cin>>statement;
        if(statement[0]=='+' || statement[1]=='+' )
            ans++;
        else ans--;
    }
    
    cout<<ans;
    
    return 0;
}
