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
        ll n;
        cin>>n;
        if(n%2){
          cout<<0;
          break;
        }
        ll x = 1, y, cnt=0;
        for( ; x<=n/4; x++){
            y = (n/2)-x;
            if(y!=x)
              cnt++;
        }
        cout<<cnt;
        
    }
    return 0;
}


