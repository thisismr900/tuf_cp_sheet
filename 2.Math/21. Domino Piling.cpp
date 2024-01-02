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
        ll m,n;
        cin>>m>>n;
        ll ans;
        if(m%2==1 && n%2==1){
            ans = ((n/2)*m)+(m/2);
        }
        else if( (m%2==0 && n%2==0) || (m%2==1 && n%2==0)){
            ans = m*(n/2);
        }
        else if(m%2 ==0 && n%2 ==1){
            ans = n*(m/2);
        }
        cout<<ans;
        
    }
    return 0;
}


