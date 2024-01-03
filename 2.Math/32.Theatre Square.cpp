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
        ll n,m,a;
        cin>>n>>m>>a;
        ll x=n/a,y=m/a;
        if(n%a != 0)x++;
        if(m%a != 0)y++;

        cout<<x*y<<"\n";
        
        
    }
    return 0;
}


