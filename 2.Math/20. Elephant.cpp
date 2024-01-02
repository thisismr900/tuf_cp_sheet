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
        ll x;
        cin>>x;
        int moves = x/5;
        if(x%5 == 0){
            cout<<moves<<"\n";
        }
        else {
            cout<<moves+1<<"\n";
        }
        
    }
    return 0;
}


