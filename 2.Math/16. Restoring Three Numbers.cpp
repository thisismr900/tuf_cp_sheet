#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases=1;
    // cin>>testcases;
    while(testcases--){
        ll x1,x2,x3,x4;
        cin>>x1>>x2>>x3>>x4;
        
        ll sum = max(x1,max(x2,max(x3,x4)));
        
        ll a,b,c;
        if(x1 == sum){
            a=sum-x2; b=sum-x3; c=sum-x4;
        }
        else if(x2 == sum){
            a=sum-x1; b=sum-x3; c=sum-x4;
        }
        else if(x3 == sum){
            a=sum-x1; b=sum-x2; c=sum-x4;
        }
        else{
            a=sum-x1; b=sum-x2; c=sum-x3;
        }
    
        cout<<a<<" "<<b<<" "<<c;
        
        
    }
    return 0;
}


