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
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll a,b;
        cin>>a>>b;
        if(a%b == 0)
            cout<<0<<"\n";
        else
            cout<<b-a%b<<"\n";
        
    }
    return 0;
}


