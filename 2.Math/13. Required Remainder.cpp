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
        ll x,y,n;
        cin>>x>>y>>n;

        ll a=(n/x)*x;
        //a%x =0
        int r = n%x;
        
        if(y>r){
          cout<<a-(x-y);
        }
        else{
          cout<<a+y;
        }
        cout<<"\n";
        
    }
    return 0;
}


